#include <iostream>
#include "Venta.h"
#include <ctime> // Para obtener la fecha actual

using namespace std;

// Constructor por defecto
Venta::Venta() {
    _idVenta = 0;
    _idCliente = 0;
    _fechaVenta = Fecha(); // Llama al constructor por defecto de Fecha
    _montoTotal = 0.0f;
}

void Venta::cargar(int idVenta, int idCliente) {
    _idVenta = idVenta;
    _idCliente = idCliente;

    // Obtener fecha actual del sistema
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    _fechaVenta = Fecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);

    _montoTotal = 0; // Se calcula despu�s, al sumar los detalles
    cout << "Venta ID: " << _idVenta << endl;
    cout << "Cliente ID: " << _idCliente << endl;
    cout << "Fecha de Venta: ";
    _fechaVenta.mostrar();
    cout << endl;
}

void Venta::mostrar() {
    cout << "ID Venta: " << _idVenta << endl;
    cout << "ID Cliente: " << _idCliente << endl;
    cout << "Fecha: ";
    _fechaVenta.mostrar();
    cout << endl;
    cout << "Monto Total: $" << _montoTotal << endl;
}

// Getters
int Venta::getIDVenta() { return _idVenta; }
int Venta::getIDCliente() { return _idCliente; }
Fecha Venta::getFechaVenta() { return _fechaVenta; }
float Venta::getMontoTotal() { return _montoTotal; }

// Setters
void Venta::setMontoTotal(float monto) { _montoTotal = monto; }
