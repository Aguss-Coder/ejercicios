#include <iostream>
#include "personajes.h"
#include "magos.h"
#include "clerigos.h"

int main(int argc, char const *argv[]) {
  Magos magoA("MagoA", "Humano", 10, 10, 100);
  Magos magoB("MagoB", "Elfo", 20, 20, 200);
  Clerigos clerigoC("ClerigoA", "Humano", 10, 10, 100, "Kratos");

  cout << endl;

  magoA.imprime(); cout << endl;
  magoB.imprime(); cout << endl;
  clerigoC.imprime(); cout << endl;

  cout << endl;

  magoA.aprenderHechizo("Bola de Fuego");
  magoA.aprenderHechizo("Rayo");

  magoB.aprenderHechizo("Bola de Fuego");

  magoA.imprime(); cout << endl;
  magoB.imprime(); cout << endl;

  cout << endl;

  magoA.lanzarHechizo(magoB);

  magoB.lanzarHechizo(magoA);

  clerigoC.curar(magoB);

  magoA.lanzarHechizo(magoB);

  magoA.imprime(); cout << endl;
  magoB.imprime(); cout << endl;
  clerigoC.imprime(); cout << endl;

  cout << endl;

  return 0;
}
