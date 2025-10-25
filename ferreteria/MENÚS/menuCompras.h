#ifndef PROVEEDORES_H_INCLUDED
#define PROVEEDORES_H_INCLUDED

#include "./funcionesMenuCompras.cpp"

void menuCompras(){
    int opc;
    while (true) {
        system("cls");
        cout << "----- MENÚ DE COMPRAS -----" << endl;
        cout << "1. Realizar pedido" << endl;
        cout << "2. Listar productos con bajo stock" << endl;
        cout << "3. Listar compras" << endl;
        cout << "4. Modificar pedido" << endl;
        cout << "5. Eliminar pedido" << endl;
        cout << "6. Limpiar compras" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: realizarPedido(); break;
            case 2: listarProductosBajoStock(); break;
            case 3: listarCompras(); break;
            case 4: modificarPedido(); break;
            case 5: eliminarPedido(); break;
            case 6: limpiarCompras(); break;
            case 0: return;
        }
        system("pause");
}

#endif // PROVEEDORES_H_INCLUDED
