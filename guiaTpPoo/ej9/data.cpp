#include <iostream>
#include "data.h"

using namespace std;

Array1D Array1D::operator+(const Array1D &other) {
  vector<int> result;
  for (vector<int>::size_type i = 0; i < array.size(); i++) {
    result.push_back(array[i] + other.array[i]);
  }
  return Array1D(result);
}

Array1D Array1D::operator-(const Array1D &other) {
  vector<int> result;
  for (vector<int>::size_type i = 0; i < array.size(); i++) {
    result.push_back(array[i] - other.array[i]);
  }
  return Array1D(result);
}

int Array1D::operator*(const Array1D &other) {
  int result = 0;
  for (vector<int>::size_type i = 0; i < array.size(); i++) {
    result += array[i] * other.array[i];
  }
  return result;
}

int Array1D::operator[](int index) {
  return array[index];
}