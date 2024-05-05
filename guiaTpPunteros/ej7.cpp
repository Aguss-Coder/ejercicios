#include <iostream>
#include <vector>

using namespace std;

void copiaCadena(vector<char> *destino, const vector<char> *origen)
{
  for (auto it = origen->begin(); it != origen->end(); ++it)
  {
    destino->push_back(*it);
  }
  
}

int main(int argc, char const *argv[])
{
  vector<char> origen;
  vector<char> destino;

  
  return 0;
}
