#include <iostream>
#include <cstring>
#include "clsProducto.h"

using namespace std;

void Producto::cargar(int proximoID) {
    _idProducto = proximoID;
    cout << "ID del Producto: " << _idProducto << endl;
    cout << "Nombre: ";
    cin.ignore();
    cin.getline(_nombre, 50);
    cout << "Descripcion: ";
    cin.getline(_descripcion, 150);
    cout << "Precio: ";
    cin >> _precio;
    cout << "Stock inicial: ";
    cin >> _stock;
    cout << "ID del Proveedor: ";
    cin >> _idProveedor;
    _eliminado = false;
}

void Producto::mostrar() {
    cout << "ID: " << _idProducto << endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Descripcion: " << _descripcion << endl;
    cout << "Precio: $" << _precio << endl;
    cout << "Stock: " << _stock << " unidades" << endl;
    cout << "ID Proveedor: " << _idProveedor << endl;
}

// Getters
int Producto::getIDProducto() { return _idProducto; }
const char* Producto::getNombre() { return _nombre; }
float Producto::getPrecio() { return _precio; }
int Producto::getStock() { return _stock; }
bool Producto::getEliminado() { return _eliminado; }

// Setters
void Producto::setStock(int nuevoStock) { _stock = nuevoStock; }
void Producto::setPrecio(float nuevoPrecio) { _precio = nuevoPrecio; }
void Producto::setEliminado(bool eliminado) { _eliminado = eliminado; }
