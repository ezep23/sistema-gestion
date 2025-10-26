#include <iostream>
#include "DetalleVenta.h"
#include "Producto.h" // Necesitamos incluir Producto.h para buscar el precio

using namespace std;

void DetalleVenta::cargar(int idVenta) {
    _idVenta = idVenta;
    cout << "  ID Producto: ";
    cin >> _idProducto;
    cout << "  Cantidad: ";
    cin >> _cantidad;

    // Buscar el precio actual del producto (esto se hace en main.cpp al validar)
    // Aqu� solo inicializamos o dejamos en 0, se setear� despu�s.
    _precioUnitario = 0.0f;
}

void DetalleVenta::mostrar() {
    cout << "  ID Venta: " << _idVenta << endl;
    cout << "  ID Producto: " << _idProducto << endl;
    cout << "  Cantidad: " << _cantidad << endl;
    cout << "  Precio Unitario: $" << _precioUnitario << endl;
}

// Getters
int DetalleVenta::getIDVenta() { return _idVenta; }
int DetalleVenta::getIDProducto() { return _idProducto; }
int DetalleVenta::getCantidad() { return _cantidad; }
float DetalleVenta::getPrecioUnitario() { return _precioUnitario; }

// Setter para el precio (�til despu�s de buscar el producto)
void DetalleVenta::setPrecioUnitario(float precio) {
    _precioUnitario = precio;
}
