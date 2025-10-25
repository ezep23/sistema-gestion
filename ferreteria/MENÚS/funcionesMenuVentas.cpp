#include <iostream>
using namespace std;


listarVentas()
modificarVenta()
eliminarVenta()



void registrarVenta(){
    // 1. Crear la cabecera de la venta
    int idCliente;
    cout << "Ingrese ID del cliente: ";
    cin >> idCliente;
    // (Aquí iría una validación para ver si el cliente existe)

    int idVenta = obtenerSiguienteID("ventas.dat", sizeof(Venta));
    Venta nuevaVenta;
    nuevaVenta.cargar(idVenta, idCliente);

    // 2. Cargar los detalles (productos)
    float montoTotal = 0;
    FILE* pDetalle = fopen("detalles.dat", "ab");
    if(pDetalle == NULL){ cout << "Error fatal en archivo de detalles" << endl; return; }

    while (true) {
        DetalleVenta detalle;
        detalle.cargar(idVenta); // Pide ID producto y cantidad

        // Buscar producto para obtener precio y validar stock
        FILE* pProd = fopen("productos.dat", "rb+");
        if (pProd == NULL) { cout << "Error de archivo productos." << endl; break; }

        Producto prod;
        bool productoEncontrado = false;
        while(fread(&prod, sizeof(Producto), 1, pProd) == 1){
            if(prod.getIDProducto() == detalle.getIDProducto()){
                if(prod.getStock() >= detalle.getCantidad()){
                    // Hay stock, se puede vender
                    float subtotal = detalle.getCantidad() * prod.getPrecio();
                    montoTotal += subtotal;

                    // Actualizar stock del producto
                    prod.setStock(prod.getStock() - detalle.getCantidad());
                    fseek(pProd, -sizeof(Producto), SEEK_CUR);
                    fwrite(&prod, sizeof(Producto), 1, pProd);

                    // Guardar el detalle de la venta
                    fwrite(&detalle, sizeof(DetalleVenta), 1, pDetalle);
                    productoEncontrado = true;
                } else {
                    cout << "Stock insuficiente. Stock disponible: " << prod.getStock() << endl;
                }
                break;
            }
        }
        fclose(pProd);
        if(!productoEncontrado) cout << "Producto no encontrado." << endl;

        char seguir;
        cout << "Desea agregar otro producto? (S/N): ";
        cin >> seguir;
        if (seguir != 'S' && seguir != 's') break;
    }
    fclose(pDetalle);

    // 3. Guardar la cabecera de la venta con el monto total calculado
    nuevaVenta.setMontoTotal(montoTotal);
    FILE* pVenta = fopen("ventas.dat", "ab");
    if(pVenta == NULL){ cout << "Error fatal en archivo de ventas" << endl; return; }
    fwrite(&nuevaVenta, sizeof(Venta), 1, pVenta);
    fclose(pVenta);

    cout << "Venta registrada con exito. ID de Venta: " << idVenta << ". Monto Total: $" << montoTotal << endl;
}
