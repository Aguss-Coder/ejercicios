#include <iostream>
#include <thread>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Reloj cronometro;

  while (true)
  {
    ++cronometro;
    cout << cronometro.getHoras() << ":" << cronometro.getMinutos() << ":" << cronometro.getSegundos() << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
  

  return 0;
}
