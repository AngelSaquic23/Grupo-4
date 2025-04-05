#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double a, b, c;

    // Pedir los valores de los catetos
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> a;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> b;

    // Calcular la hipotenusa
    c = sqrt(a * a + b * b);

    cout << "La hipotenusa es: " << c << endl;

system("pause");
}

