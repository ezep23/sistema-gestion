#ifndef CLSFECHA_H_INCLUDED
#define CLSFECHA_H_INCLUDED

class Fecha{

  private:
    int _dia, _mes, _anio;

  public:

    /// Constructores
    Fecha(_dia=0, _mes=0, _anio=0);
    Fecha(int dia,int mes,int anio);

    /// Getters
    int getDia();
    int getMes();
    int getAnio();

    /// Setters
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    /// Validaciones
    bool esBisiesto(int anio);
    bool validarFecha(int dia, int mes, int anio);

    void Cargar();
    void Mostrar();
};

#endif // CLSFECHA_H_INCLUDED
