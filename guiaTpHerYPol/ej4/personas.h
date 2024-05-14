#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>

using namespace std;

class Persona {
  protected:
    string nombre;
    string apellido;
    int dni;
    char estadoCivil;
  public:
    Persona();
    Persona(string, string, int, char);
    void setNombre(string);
    void setApellido(string);
    void setDni(int);
    void setEstadoCivil(char);
    string getNombre();
    string getApellido();
    int getDni();
    char getEstadoCivil();
    virtual void cambiarEstadoCivil(char);
    virtual void mostrarDatos() = 0;
};

#endif