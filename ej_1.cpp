#include <iostream>

using namespace std;

void calculateTime(float distance, float speed){
  float result, second_speed;
  if (speed == 0) {
    cout << "Speed can't be 0" << endl;
    cout << "Put the correct time: " << endl;
    cin >> second_speed;
    calculateTime(distance, second_speed);
  } else {
    result = (distance / speed);
  }
  cout << "The time was: " << result << "(s)" << endl;
}

void calculateSpeed(float distance, float time){
  float result, second_time;
  if (time == 0) {
    cout << "Time can't be 0" << endl;
    cout << "Put the correct time: " << endl;
    cin >> second_time;
    calculateSpeed(distance, second_time);
  } else {
    result = (distance / time);
  }
  cout << "The speed was: " << result << "(m/s)" << endl;
}

void calculateDistance(float speed, float time){
  float result;
  result = speed * time;
  cout << "The distance was: "<< result << "(m)" << endl;
}

int main() {
  float time, speed, distance;
  int count;
  cout << "What do you want to calculate?" << endl;
  cout << "1. distance\n2. speed\n3. time" << endl;
  cin >> count;

  switch (count)
  {
  case 1:
    cout << "Put the speed value: " << endl;
    cin >> speed;
    cout << "Put the time value: " << endl;
    cin >> time;
    calculateDistance(speed, time);
    break;
  case 2:
    cout << "Put the distance value: " << endl;
    cin >> distance;
    cout << "Put the time value: " << endl;
    cin >> time;
    calculateSpeed(distance, time);
    break;
  case 3:
    cout << "Put the distance value: " << endl;
    cin >> distance;
    cout << "Put the speed value: " << endl;
    cin >> speed;
    calculateTime(distance, speed);
    break; 
  default:
    cout << "Error. You can only put numbers.";
  }
}
