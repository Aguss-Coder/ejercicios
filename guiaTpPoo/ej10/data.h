#include <iostream>
#include <vector>

using namespace std;

class Matrix {
  vector<vector<int>> matrix;
  public:
    Matrix(vector<vector<int>> matrix): matrix(matrix) {};
    Matrix operator+(const Matrix &other);
    Matrix operator-(const Matrix &other);
    Matrix operator*(const Matrix &other);
    int &operator()(size_t i, size_t j);
};