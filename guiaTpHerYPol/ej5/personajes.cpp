#include <iostream>
#include "personajes.h"

using namespace std;

Personajes::Personajes(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos) {
  this->nombre = nombre;
  this->raza = raza;
  this->fuerza = fuerza;
  this->inteligencia = inteligencia;
  this->puntosVidaMaximos = puntosVidaMaximos;
  this->puntosVidaActuales = puntosVidaMaximos;
}

void Personajes::setNombre(string nombre) { this->nombre = nombre; }
void Personajes::setRaza(string raza) { this->raza = raza; }
void Personajes::setFuerza(int fuerza) { this->fuerza = fuerza; }
void Personajes::setInteligencia(int inteligencia) { this->inteligencia = inteligencia; }
void Personajes::setPuntosVidaMaximos(int puntosVidaMaximos) { this->puntosVidaMaximos = puntosVidaMaximos; }
void Personajes::setPuntosVidaActuales(int puntosVidaActuales) { this->puntosVidaActuales = puntosVidaActuales; }

string Personajes::getNombre() { return nombre; }
string Personajes::getRaza() { return raza; }
int Personajes::getFuerza() { return fuerza; }
int Personajes::getInteligencia() { return inteligencia; }
int Personajes::getPuntosVidaMaximos() { return puntosVidaMaximos; }
int Personajes::getPuntosVidaActuales() { return puntosVidaActuales; }

void Personajes::imprime() {
  cout << "Nombre: " << nombre << endl;
  cout << "Raza: " << raza << endl;
  cout << "Fuerza: " << fuerza << endl;
  cout << "Inteligencia: " << inteligencia << endl;
  cout << "Puntos de vida máximos: " << puntosVidaMaximos << endl;
  cout << "Puntos de vida actuales: " << puntosVidaActuales << endl;
}