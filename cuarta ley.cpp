#include <iostream>
using namespace std;

int main() {
    const float g = 9.81; // aceleraci�n por gravedad en la Tierra (m/s�)
    float masa, peso;

    cout << "C�lculo del peso usando F = m * g" << endl;
    cout << "Ingrese la masa del objeto (kg): ";
    cin >> masa;

    peso = masa * g;

    cout << "El peso del objeto en la Tierra es: " << peso << " N" << endl;

    return 0;
}

