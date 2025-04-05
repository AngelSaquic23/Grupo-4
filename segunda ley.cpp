#include <iostream>
using namespace std;

int main() {
    float masa, aceleracion, fuerza;

    cout << "Segunda Ley de Newton (F = m * a)" << endl;
    cout << "Ingrese la masa del objeto (kg): ";
    cin >> masa;
    cout << "Ingrese la aceleración del objeto (m/s²): ";
    cin >> aceleracion;

    fuerza = masa * aceleracion;

    cout << "La fuerza neta es: " << fuerza << " N" << endl;

    return 0;
}

