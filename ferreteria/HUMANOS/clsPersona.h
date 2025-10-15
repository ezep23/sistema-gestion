#ifndef CLSPERSONA_H_INCLUDED
#define CLSPERSONA_H_INCLUDED

class Persona(){
 protected:
    char nombre[30];
    char email[30];
    int telefono[15];
    bool eliminado;
 public:
    void Cargar();
    void Mostrar();
};

#endif // CLSPERSONA_H_INCLUDED
