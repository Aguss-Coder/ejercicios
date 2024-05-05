#include <iostream>
#include "data.h"
#include <vector>
#include <algorithm>

using namespace std;

Conjunto &Conjunto::operator=(const Conjunto &other) {
  if (&other == this) {
    return *this;
  }
  elementos = other.elementos;
  maximo = other.maximo;
  return *this;
}

void Conjunto::agregar(int elemento) {
  if (elementos.size() < maximo && find(elementos.begin(), elementos.end(), elemento) == elementos.end()) {
    elementos.push_back(elemento);
  }
}

void Conjunto::eliminar(int elemento) {
  elementos.erase(remove(elementos.begin(), elementos.end(), elemento), elementos.end());
}

void Conjunto::mostrar() {
  for (int elemento : elementos) {
    cout << elemento << " ";
  }
  cout << endl;
}

Conjunto Conjunto::operator+(const Conjunto &other) {
  Conjunto result(maximo);
  for (int elemento : elementos) {
    result.agregar(elemento);
  }
  for (int elemento : other.elementos) {
    result.agregar(elemento);
  }
  return result;
}

Conjunto Conjunto::operator-(const Conjunto &other) {
  Conjunto result(maximo);
  for (int elemento : elementos) {
    if (find(other.elementos.begin(), other.elementos.end(), elemento) == other.elementos.end()) {
      result.agregar(elemento);
    }
  }
  return result;
}

Conjunto Conjunto::operator*(const Conjunto &other) {
  Conjunto result(maximo);
  for (int elemento : elementos) {
    if (find(other.elementos.begin(), other.elementos.end(), elemento) != other.elementos.end()) {
      result.agregar(elemento);
    }
  }
  return result;
}