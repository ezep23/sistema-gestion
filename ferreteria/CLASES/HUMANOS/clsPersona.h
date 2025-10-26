#ifndef CLSPERSONA_H_INCLUDED
#define CLSPERSONA_H_INCLUDED

class Persona(){
 private:

    char _nombre[50];
    char _apellido[50];
    int  _telefono[20];
    char _email[30];
    char _condicionIVA[20]; // Monotributo, respons, exento
    bool _eliminado;

 public:

    const char* getNombre();
    const char* getApellido();
    const char* getTelefono();
    const char* getEmail();
    const char* getCondicion();
    bool getEliminado();

    void setNombre(const char*);
    void setApellido(const char*);
    void setTelefono(const char*),
    void setEliminado(bool);
    void setEmail(const char*);
    void setCondicion(const char*);

    void Cargar();
    void Mostrar();

};

#endif // CLSPERSONA_H_INCLUDED
