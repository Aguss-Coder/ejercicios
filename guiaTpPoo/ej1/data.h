#include <iostream>

using namespace std;

class Fecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    Fecha(int dia, int mes, int anio);
    Fecha();
    void setDia(int &pDia);
    void setMes(int &pMes);
    void setAnio(int &pAnio);
    int getDia();
    int getMes();
    int getAnio();
    void mostrarFecha();
};