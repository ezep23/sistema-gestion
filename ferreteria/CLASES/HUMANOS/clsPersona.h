#ifndef CLSPERSONA_H_INCLUDED
#define CLSPERSONA_H_INCLUDED

class Persona(){
 private:
    char nombre[15];
    char apellido[15];
    char email[30];
    int telefono[15];
    bool eliminado;
 public:
    void Cargar();
    void Mostrar();
};

#endif // CLSPERSONA_H_INCLUDED
