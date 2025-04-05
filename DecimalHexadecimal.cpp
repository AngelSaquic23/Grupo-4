#include <iostream>
#include <vector>

using namespace std;

void DecimalHexadecimal(int num) {
    if (num == 0) {
        cout << "El numero en hexadecimal es: 0" << endl;
        return;
    }

    vector<char> hexadecimal;
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (num > 0) {
        int residuo = num % 16; // Se obtiene el residuo de haber dividido por "16"
        hexadecimal.push_back(hexDigits[residuo]);
        num /= 16; // Dividimos por 16
    }

    cout << "El numero en hexadecimal es: ";
    for (int i = hexadecimal.size() - 1; i >= 0; i--) {// Mostramos en orden inverso
        cout << hexadecimal[i];
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    DecimalHexadecimal(numero);

system("pause");
}

