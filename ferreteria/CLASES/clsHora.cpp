#include "Hora.h"
#include <ctime>
#include <iomanip>

Hora::Hora(int h, int m, int s) {
    hora = h;
    minuto = m;
    segundo = s;
}

void Hora::Mostrar() const {
    cout << setfill('0') << setw(2) << hora << ":"
         << setw(2) << minuto << ":"
         << setw(2) << segundo;
}

void Hora::AsignarHoraActual() {
    time_t ahora = time(nullptr);       // Obtiene el tiempo actual del sistema
    tm* tiempoLocal = localtime(&ahora); // Lo convierte a hora local

    hora = tiempoLocal->tm_hour;
    minuto = tiempoLocal->tm_min;
    segundo = tiempoLocal->tm_sec;
}
