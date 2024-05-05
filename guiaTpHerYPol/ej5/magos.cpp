#include "magos.h"
#include "personajes.h"
#include <iostream>
#include <vector>

using namespace std;

Magos::Magos(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos)
  : Personajes(nombre, raza, (fuerza > 15 ? 15 : fuerza), (inteligencia < 17 ? 17 : inteligencia), puntosVidaMaximos) {}

void Magos::aprenderHechizo(string hechizo) {
  if (hechizos.size() < 4) {
    hechizos.push_back(hechizo);
  } else {
    cout << "El mago ya ha aprendido el maximo de hechizos" << endl;
  }
}

void Magos::lanzarHechizo(Personajes &personaje) {
  if (!hechizos.empty()) {
    personaje.setPuntosVidaActuales(personaje.getPuntosVidaActuales() - 10);
    hechizos.pop_back();
  } else {
    cout << "El mago no tiene hechizos para lanzar" << endl;
  }
}

void Magos::imprime() {
  Personajes::imprime();
  cout << "Hechizos: ";
  for (string hechizo : hechizos) {
    cout << hechizo << ", ";
  }
  cout << endl;
}