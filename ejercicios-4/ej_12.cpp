#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tirar_dados() {
    return rand() % 6 + 1 + rand() % 6 + 1;
}

int main() {
    srand(time(0));
    int suma = tirar_dados();

    cout << "Sacaste un " << suma << endl;

    if (suma == 7 || suma == 11) {
        cout << "¡Ganaste!" << endl;
    } else if (suma == 2 || suma == 3 || suma == 12) {
        cout << "Perdiste." << endl;
    } else {
        int punto = suma;
        cout << "Tu punto es " << punto << endl;
        do {
            suma = tirar_dados();
    
            cout << "Tiraste un " << suma << endl;
        } while (suma != punto && suma != 7);
        if (suma == punto) {
            cout << "¡Ganaste!" << endl;
        } else {
            cout << "Perdiste." << endl;
        }
    }
    return 0;
}
