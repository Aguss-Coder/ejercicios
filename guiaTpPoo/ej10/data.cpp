#include <iostream>
#include "data.h"

using namespace std;

Matrix Matrix::operator+(const Matrix &other) {
  vector<vector<int>> result(matrix.size(), vector<int>(matrix[0].size()));
  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
      result[i][j] = matrix[i][j] + other.matrix[i][j];
      }
    }
  return Matrix(result);
}

Matrix Matrix::operator-(const Matrix &other) {
  vector<vector<int>> result(matrix.size(), vector<int>(matrix[0].size()));
  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
      result[i][j] = matrix[i][j] - other.matrix[i][j];
      }
    }
  return Matrix(result);
}

Matrix Matrix::operator*(const Matrix &other) {
  vector<vector<int>> result(matrix.size(), vector<int>(other.matrix[0].size()));
  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < other.matrix[0].size(); j++) {
      for (size_t k = 0; k < matrix[0].size(); k++) {
        result[i][j] += matrix[i][k] * other.matrix[k][j];
        }
      }
    }
  return Matrix(result);
}

int &Matrix::operator()(size_t i, size_t j) {
  return matrix[i][j];
}