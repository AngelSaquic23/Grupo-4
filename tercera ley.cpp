#include <iostream>
using namespace std;

int main() {
    float fuerza;

    cout << "Tercera Ley de Newton (Acci�n y Reacci�n)" << endl;
    cout << "Ingrese la fuerza de acci�n aplicada (N): ";
    cin >> fuerza;

    cout << "Fuerza de acci�n: " << fuerza << " N" << endl;
    cout << "Fuerza de reacci�n (opuesta): " << -fuerza << " N" << endl;

    return 0;
}

