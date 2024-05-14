#include <iostream>

using namespace std;

class Clock {
  private:
    int horas;
    int minutos;
    int segundos;
  public:
    Clock();
    void setHoras(int &pHoras);
    void setMinutos(int &pMinutos);
    void setSegundos(int &pSegundos);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void reset();
    Clock& operator++();
};