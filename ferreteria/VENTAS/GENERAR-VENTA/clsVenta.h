#ifndef CLSVENTA_H_INCLUDED
#define CLSVENTA_H_INCLUDED

#include "../../Utiles/clsFecha.h"

class Venta {
private:
    int _idVenta;
    int _idCliente;
    Fecha _fechaVenta;
    float _montoTotal;

public:
    Venta(); // Constructor por defecto
    void cargar(int idVenta, int idCliente);
    void mostrar();
    // Getters
    int getIDVenta();
    int getIDCliente();
    Fecha getFechaVenta();
    float getMontoTotal();
    // Setters
    void setMontoTotal(float monto);
};

#endif // CLSVENTA_H_INCLUDED
