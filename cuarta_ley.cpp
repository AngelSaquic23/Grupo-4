#include <iostream>
using namespace std;

int main() {
    const float g = 9.81; // aceleración por gravedad en la Tierra (m/s²)
    float masa, peso;

    cout << "Cálculo del peso usando F = m * g" << endl;
    cout << "Ingrese la masa del objeto (kg): ";
    cin >> masa;

    peso = masa * g;

    cout << "El peso del objeto en la Tierra es: " << peso << " N" << endl;

     system("pause");
}

