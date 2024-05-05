#include "personajes.h"
#include <iostream>
#include <vector>

class Magos : public Personajes {
  private:
    vector<string> hechizos;
  public:
    Magos(string, string, int, int, int);
    void aprenderHechizo(string);
    void lanzarHechizo(Personajes &personaje);
    void imprime() override;
};