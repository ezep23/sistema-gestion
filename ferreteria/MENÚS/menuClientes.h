#ifndef MENUCLIENTES_H_INCLUDED
#define MENUCLIENTES_H_INCLUDED

#include "./funcionesMenuClientes.cpp"

void menuClientes(){
    int opc;
    while (true) {
        system("cls");
        cout << "----- MENÚ DE CLIENTES -----" << endl;
        cout << "1. Agregar cliente" << endl;
        cout << "2. Listar clientes" << endl;
        cout << "3. Modificar cliente" << endl;
        cout << "4. Eliminar cliente" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: agregarCliente(); break;
            case 2: listarClientes(); break;
            case 3: modificarCliente(); break;
            case 4: eliminarCliente(); break;
            case 0: return;
        }
        system("pause");
}


#endif // MENUCLIENTES_H_INCLUDED
