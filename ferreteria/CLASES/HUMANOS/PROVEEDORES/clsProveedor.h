#ifndef CLSPROVEEDOR_H_INCLUDED
#define CLSPROVEEDOR_H_INCLUDED
#include "../clsPersona.h"

class Proveedor: public Persona{
 private:
    int _idProveedor;
    int _identificacion; //cuit-cuil
    char[50] _nombreEmpresa
    char[50] _razonSocial;
    char[50] _domicilio;
    bool esParticular;
};

#endif // CLSCLIENTE_H_INCLUDED
