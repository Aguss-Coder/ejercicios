#include <iostream>

using namespace std;

class Reloj {
  private:
    int horas;
    int minutos;
    int segundos;
  public:
    Reloj();
    void setHoras(int &pHoras);
    void setMinutos(int &pMinutos);
    void setSegundos(int &pSegundos);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void reset();
    Reloj& operator++();
};