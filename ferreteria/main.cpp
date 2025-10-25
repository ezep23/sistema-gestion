#include <iostream>

#include "./MENÚS/menuProductos.h"
#include "./MENÚS/menuClientes.h"
#include "./MENÚS/menuVentas.h"
#include "./MENÚS/menuCompras.h"
#include "./MENÚS/menuInformes.h"
#include "./MENÚS/menuConfiguracion.h"


using namespace std;

int main(){
    int opcion;

    while (true) {
        system("cls");
        cout << "--- FERRETERIA 07 ---------------------" << endl;
        cout << "1. Menú de Productos" << endl;
        cout << "2. Menú de Clientes" << endl;
        cout << "3. Menú de Ventas" << endl;
        cout << "4. Menú de Compras" << endl;
        cout << "5. Menú de Informes" << endl;
        cout << "6. Menú de Configuración" << endl;
        cout << "---------------------------------------" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: menuProductos(); break;
            case 2: menuClientes(); break;
            case 3: menuVentas(); break;
            case 4: menuCompras(); break;
            case 5: menuInformes(); break;
            case 6: menuConfiguracion(); break;
            case 0: return;
        }
    }



    return 0;
}


