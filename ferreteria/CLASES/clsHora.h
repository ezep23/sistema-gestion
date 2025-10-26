#ifndef CLSHORA_H_INCLUDED
#define CLSHORA_H_INCLUDED

#include <iostream>
using namespace std;

class Hora {
 private:

    int hora;    // 0–23
    int minuto;  // 0–59
    int segundo; // 0–59

 public:

    Hora(int h = 0, int m = 0, int s = 0);

    void setHora(int h);
    void setMinuto(int m);

    void asignarHoraActual();
    void modificarHora();
    void mostrar() const;     // Muestra la hora en formato hh:mm:ss

};

#endif // CLSHORA_H_INCLUDED
