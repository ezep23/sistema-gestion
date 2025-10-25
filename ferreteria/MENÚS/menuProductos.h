#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

#include <iostream>
using namespace std;

#include "./funcionesMenuProductos.cpp"

void menuProductos(){
     int opc;
    while (true) {
        system("cls");
        cout << "----- MENÚ DE PRODUCTOS ----" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Listar productos" << endl;
        cout << "3. Modificar precio" << endl;
        cout << "4. Dar de baja producto" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: agregarProducto(); break;
            case 2: listarProductos(); break;
            case 3: modificarPrecioProducto(); break;
            case 4: bajaProducto(); break;
            case 0: return;
        }
        system("pause");
    }
}

#endif // PRODUCTOS_H_INCLUDED
