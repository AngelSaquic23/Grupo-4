#include <iostream>
using namespace std;

string convertirARomano(int numero) {
    string romano = "";

    int valores[] =    {1000, 900, 500, 400, 100, 90,  50,  40,  10,  9,   5,   4,   1};
    string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            numero -= valores[i];
            romano += simbolos[i];
        }
    }

    return romano;
}

int main() {
    int numero;

    cout << "Ingrese un numero arabigo (minimo 1000): "<<endl;
    cin >> numero;

    if (numero >= 1000 && numero <= 3999) {
        string romano = convertirARomano(numero);
        cout << "El numero romano es: " << romano << endl;
    } else {
        cout << "Por favor, ingrese un numero entre 1000 y 3999." << endl;
    }

    return 0;
}
