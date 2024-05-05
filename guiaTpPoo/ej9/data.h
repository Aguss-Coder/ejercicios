#include <iostream>
#include <vector>

using namespace std;

class Array1D {
  private:
    vector<int> array;
  public:
    Array1D(vector<int> array) : array(array) {};
    Array1D operator+(const Array1D &other);
    Array1D operator-(const Array1D &other);
    int operator*(const Array1D &other);
    int operator[](int index);
};