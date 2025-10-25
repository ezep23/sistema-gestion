#ifndef MENUINFORMES_H_INCLUDED
#define MENUINFORMES_H_INCLUDED

#include "./funcionesMenuInformes.cpp"

void menuInformes(){
    int opc;
    while (true) {
        system("cls");
        cout << "----- MENÚ DE INFORMES -----" << endl;
        cout << "1. Listar recaudación mensual" << endl;
        cout << "2. Listar recaudación anual" << endl;
        cout << "3. Listar proveedores con mayores ventas" << endl;
        cout << "4. Listar clientes con mayores compras" << endl;
        cout << "5. Listar cantidad de productos por proveedor" << endl;
        cout << "6. Listar cantidad total de ventas - (Categoria)" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: recaudacionMensual(); break;
            case 2: recaudacionAnual(); break;
            case 3: proveedoresMayoresVentas(); break;
            case 4: clientesMayoresCompras(); break;
            case 5: cantidadProductosProveedor(); break;
            case 6: cantidadTotalVentasCategoria(); break;
            case 0: return;
        }
        system("pause");
}


#endif // MENUINFORMES_H_INCLUDED
