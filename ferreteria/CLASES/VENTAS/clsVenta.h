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
    Venta();

    int getIDVenta();
    int getIDCliente();
    Fecha getFechaVenta();
    float getMontoTotal();

    void setMontoTotal(float monto);

    void cargar(int idVenta, int idCliente);
    void mostrar();
};

#endif // CLSVENTA_H_INCLUDED
