#include <iostream>

#include "./MEN�S/menuProductos.h"
#include "./MEN�S/menuClientes.h"
#include "./MEN�S/menuVentas.h"
#include "./MEN�S/menuCompras.h"
#include "./MEN�S/menuInformes.h"
#include "./MEN�S/menuConfiguracion.h"


using namespace std;

int main(){
    int opcion;

    while (true) {
        system("cls");
        cout << "--- FERRETERIA 07 ---------------------" << endl;
        cout << "1. Men� de Productos" << endl;
        cout << "2. Men� de Clientes" << endl;
        cout << "3. Men� de Ventas" << endl;
        cout << "4. Men� de Compras" << endl;
        cout << "5. Men� de Informes" << endl;
        cout << "6. Men� de Configuraci�n" << endl;
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


