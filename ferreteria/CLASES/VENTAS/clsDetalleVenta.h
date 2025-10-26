#ifndef CLSDETALLEVENTA_H_INCLUDED
#define CLSDETALLEVENTA_H_INCLUDED

class DetalleVenta {
private:
    int _idVenta;
    int _idProducto;
    int _cantidad;
    float _precioUnitario;

public:
    void cargar(int idVenta);
    void mostrar();
    // Getters
    int getIDVenta();
    int getIDProducto();
    int getCantidad();
    float getPrecioUnitario();

    // Setter <<<--- DECLARACI�N A�ADIDA AQU�
    void setPrecioUnitario(float precio);
};

#endif // CLSDETALLEVENTA_H_INCLUDED
