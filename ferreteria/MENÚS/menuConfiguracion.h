#ifndef MENUCONFIGURACION_H_INCLUDED
#define MENUCONFIGURACION_H_INCLUDED

#include "./funcionesMenuConfiguracion.cpp"

void menuConfiguracion(){
    int opc;
    while (true) {
        system("cls");
        cout << "--- MENÚ DE CONFIGURACIÓN ---" << endl;
        cout << "1. Realizar copia de seguridad" << endl;
        cout << "2. Restaurar copia de seguridad" << endl;
        cout << "3. Exportar datos a CSV" << endl;
        cout << "----------------------------" << endl;
        cout << "0. Volver" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: realizarCopiaSeguridad(); break;
            case 2: restaurarCopiaSeguridad(); break;
            case 3: ExportarCSV(); break;
            case 0: return;
        }
        system("pause");
}

#endif // MENUCONFIGURACION_H_INCLUDED
