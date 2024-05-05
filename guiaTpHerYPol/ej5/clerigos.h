#include "personajes.h"
#include <iostream>

using namespace std;

class Clerigos : public Personajes {
  private:
    string dios;
  public:
    Clerigos(string, string, int, int, int, string);
    void curar(Personajes &personaje);
    void imprime() override;
};