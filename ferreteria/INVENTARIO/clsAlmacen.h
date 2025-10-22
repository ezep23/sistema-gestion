#ifndef CLSALMACEN_H_INCLUDED
#define CLSALMACEN_H_INCLUDED

#include "./PRODUCTO/clsProducto.h"

class Almacen {
public:
    // Reduce el stock de un producto. Devuelve 'true' si fue posible.
    bool descontarStock(int idProducto, int cantidad);

    // Aumenta el stock de un producto (ej: al recibir mercader�a).
    bool reponerStock(int idProducto, int cantidad);

    // Devuelve el stock actual de un producto.
    int consultarStock(int idProducto);

    // Lista todos los productos con stock por debajo de un l�mite.
    void listarProductosBajoStock(int limite);
};



#endif // CLSALMACEN_H_INCLUDED
