#include <iostream>
#include "data.h"

using namespace std;

Clock::Clock() {
  horas = 0;
  minutos = 0;
  segundos = 0;
}

void Clock::setHoras(int &pHoras) {
  cin >> pHoras;
}

void Clock::setMinutos(int &pMinutos) {
  cin >> pMinutos;
}

void Clock::setSegundos(int &pSegundos) {
  cin >> pSegundos;
}

int Clock::getHoras() {
  return horas;
}

int Clock::getMinutos() {
  return minutos;
}

int Clock::getSegundos() {
  return segundos;
}

void Clock::reset() {
  horas = 0;
  minutos = 0;
  segundos = 0;
}

Clock& Clock::operator++() {
  segundos++;
  if (segundos == 60) {
    segundos = 0;
    minutos++;
    if (minutos == 60) {
      minutos = 0;
      horas++;
    }
  }
  return *this;
}