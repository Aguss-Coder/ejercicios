#include <iostream>
#include <vector>

using namespace std;

class Conjunto {
  private:
    vector<int> elementos;
    int maximo;
  public:
    Conjunto(int maximo): maximo(maximo) {};
    ~Conjunto() {};
    Conjunto &operator=(const Conjunto &other);
    void agregar(int elemento);
    void eliminar(int elemento);
    void mostrar();
    Conjunto operator+(const Conjunto &other);
    Conjunto operator-(const Conjunto &other);
    Conjunto operator*(const Conjunto &other);
};