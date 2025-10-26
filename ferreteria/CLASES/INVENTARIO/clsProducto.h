#ifndef CLSPRODUCTO_H_INCLUDED
#define CLSPRODUCTO_H_INCLUDED

class Producto {
private:
    int  _idProducto;
    char _nombre[50];
    char _descripcion[150];
    float _precio;
    int  _stock;
    int  _idProveedor;
    int  _idCategoria;
    bool _eliminado;

public:

    int getIDProducto();
    const char* getNombre();
    float getPrecio();
    int getStock();
    bool getEliminado();

    void setStock(int nuevoStock);
    void setPrecio(float nuevoPrecio);
    void setEliminado(bool eliminado);
    int getIDCategoria();

    void cargar(int proximoID); // Recibe el ID que le corresponde
    void mostrar();

};


#endif // CLSPRODUCTO_H_INCLUDED
