#include <iostream>

using namespace std;

class Temperature {
  protected:
    float value;
    string scale;
  public:
    Temperature();
    Temperature(float value, string scale): value(value), scale(scale) {};
    float getValue();
    void setScale(string scale);
    string getTemperature();
    void convertScale(string scale);
};