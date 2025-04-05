#include <iostream>
using namespace std;

int main() {
    float fuerza;

    cout << "Tercera Ley de Newton (Acción y Reacción)" << endl;
    cout << "Ingrese la fuerza de acción aplicada (N): ";
    cin >> fuerza;

    cout << "Fuerza de acción: " << fuerza << " N" << endl;
    cout << "Fuerza de reacción (opuesta): " << -fuerza << " N" << endl;

    return 0;
}

