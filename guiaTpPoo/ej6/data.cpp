#include <iostream>
#include "data.h"
#include <string>
#include <random>

using namespace std;

Password::Password(){
  length = 8;
  generatePassword();
}

void Password::generatePassword(){
  string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(0, chars.size() - 1);

  password.clear();
  for(int i = 0; i < length; i++){
    password += chars[dis(gen)];
  }
}

bool Password::isStrong(){
  bool hasLower = false, hasUpper = false, hasDigit = false;
  for(char c : password){
    if(islower(c)) hasLower = true;
    if(isupper(c)) hasUpper = true;
    if(isdigit(c)) hasDigit = true;
  }
  return hasLower && hasUpper && hasDigit;
}

void Password::display(){
  cout << "Password: " << password << " , Length: " << length << endl;
}

void Password::setLength(int length){
  this->length = length;
  generatePassword();
}