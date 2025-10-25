#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED

#include "./funcionesMenuVentas.cpp"

void menuVentas(){
     int opc;
    while (true) {
        system("cls");
        cout << "------ MENÚ DE VENTAS ------" << endl;
        cout << "1. Registrar venta" << endl;
        cout << "2. Listar ventas" << endl;
        cout << "3. Modificar venta" << endl;
        cout << "4. Eliminar venta" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: registrarVenta(); break;
            case 2: listarVentas(); break;
            case 3: modificarVenta(); break;
            case 4: eliminarVenta(); break;
            case 0: return;
        }
        system("pause");
    }
}

#endif // VENTAS_H_INCLUDED
