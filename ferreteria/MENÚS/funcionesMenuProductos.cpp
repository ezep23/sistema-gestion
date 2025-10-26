#include <iostream>
using namespace std;

#include "./menuProductos.h"

int obtenerSiguienteID(const char* archivo, int tamRegistro) {

    FILE* p = fopen(archivo, "rb");
    if (p == NULL) return 1; /// Si no existe, id = 1

    fseek(p, 0, SEEK_END);
    int cantBytes = ftell(p);
    fclose(p);
    return (cantBytes / tamRegistro) + 1;
}

void agregarProducto() {
    Producto producto;

    int proximoID = obtenerSiguienteID("productos.dat", sizeof(Producto));
    producto.cargar(proximoID);

    FILE* p = fopen("productos.dat", "ab");
    if (p == NULL) { cout << "Error de archivo." << endl; return; }

    fwrite(&reg, sizeof(Producto), 1, p);
    fclose(p);
    cout << "Producto agregado." << endl;
}

void listarProductos() {
    Producto producto;

    FILE* p = fopen("productos.dat", "rb");
    if (p == NULL) { cout << "Archivo vacio o inexistente." << endl; return; }

    cout << endl << "--- LISTADO DE PRODUCTOS ---" << endl;
    while (fread(&reg, sizeof(Producto), 1, p) == 1) {
        if (!reg.getEliminado()) { // Solo muestra activos
            reg.mostrar();
            cout << "-----------------------------" << endl;
        }
    }
    fclose(p);
}

void modificarPrecioProducto() {
    int id;
    cout << "ID del producto a modificar: ";
    cin >> id;

    FILE* p = fopen("productos.dat", "rb+");
    if (p == NULL) { cout << "Error de archivo." << endl; return; }

    Producto producto;
    bool encontrado = false;

    while (fread(&producto, sizeof(Producto), 1, p) == 1) {
        if (producto.getIDProducto() == id && !producto.getEliminado()) {
            float nuevoPrecio;
            cout << "Precio actual: $" << producto.getPrecio() << endl;
            cout << "Ingrese nuevo precio: $";
            cin >> nuevoPrecio;
            producto.setPrecio(nuevoPrecio);

            // Corrected fseek
fseek(p, -(long)sizeof(Producto), SEEK_CUR); // Retrocede para sobrescribir
            fwrite(&producto, sizeof(Producto), 1, p);
            encontrado = true;
            cout << "Precio modificado." << endl;
            break;
        }
    }
    if (!encontrado) cout << "No se encontro el producto." << endl;
    fclose(p);
}

void bajaProducto() {
    int id;
    cout << "ID del producto a dar de baja: ";
    cin >> id;

    FILE* p = fopen("productos.dat", "rb+");
    if (p == NULL) { cout << "Error de archivo." << endl; return; }

    Producto producto;
    bool encontrado = false;

    while (fread(&producto, sizeof(Producto), 1, p) == 1) {
        if (producto.getIDProducto() == id) {
            producto.setEliminado(true);
            // Corrected fseek
fseek(p, -(long)sizeof(Producto), SEEK_CUR);
            fwrite(&producto, sizeof(Producto), 1, p);
            encontrado = true;
            cout << "Producto dado de baja." << endl;
            break;
        }
    }
    if (!encontrado) cout << "No se encontro el producto." << endl;
    fclose(p);
}
