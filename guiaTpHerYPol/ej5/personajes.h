#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <iostream>

using namespace std;

class Personajes {
  protected:
    string nombre;
    string raza;
    int fuerza;
    int inteligencia;
    int puntosVidaMaximos;
    int puntosVidaActuales;
  public:
    Personajes(string, string, int, int, int);
    
    void setNombre(string);
    void setRaza(string);
    void setFuerza(int);
    void setInteligencia(int);
    void setPuntosVidaMaximos(int);
    void setPuntosVidaActuales(int);

    string getNombre();
    string getRaza();
    int getFuerza();
    int getInteligencia();
    int getPuntosVidaMaximos();
    int getPuntosVidaActuales();

    virtual void imprime();
};

#endif