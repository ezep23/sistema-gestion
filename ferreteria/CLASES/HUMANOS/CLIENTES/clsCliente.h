#ifndef CLSCLIENTE_H_INCLUDED
#define CLSCLIENTE_H_INCLUDED
#include "../clsPersona.h"

class Cliente: public Persona{
 private:

   int _idCliente;  // nuestro sistema
   int _identificacion; // cuit - dni
   bool esParticular;

 public:

   int getIdCliente();
   int getIdentificacion();
   bool getTipoCliente();

   void setIdCliente(int);
   void setIdentificacion(int);
   void setTipoCliente(bool);

   Cargar();
   Mostrar();

};


#endif // CLSCLIENTE_H_INCLUDED
