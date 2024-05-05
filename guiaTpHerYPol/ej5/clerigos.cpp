#include "clerigos.h"
#include <iostream>

using namespace std;

Clerigos::Clerigos(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos, string dios)
  : Personajes(nombre, raza, (fuerza > 18 ? 18 : fuerza), (inteligencia < 12 ? 12 : (inteligencia > 16 ? 16 : inteligencia)), puntosVidaMaximos), dios(dios) {}

void Clerigos::curar(Personajes &personaje) {
  personaje.setPuntosVidaActuales(personaje.getPuntosVidaActuales() + 10);
}

void Clerigos::imprime() {
  Personajes::imprime();
  cout << "Dios: " << dios << endl;
}