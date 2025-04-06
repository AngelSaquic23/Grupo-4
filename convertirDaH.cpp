#include <iostream>
#include <vector>
using namespace std;

void convertirADecimalAHexadecimal(int numeroDecimal) {
    vector<char> hexadecimal; // Vector para almacenar los digitos hexadecimales

    // Manejar el caso especial para 0
    if (numeroDecimal == 0) {
        cout << "El numero hexadecimal es: 0" << endl;
        return;
    }

    // Convertir el numero decimal a hexadecimal
    while (numeroDecimal > 0) {
        int residuo = numeroDecimal % 16; // Obtener el residuo
        if (residuo < 10) {
            hexadecimal.push_back('0' + residuo); // Convertir a caracter
        } else {
            hexadecimal.push_back('A' + (residuo - 10)); // Convertir a caracter (A-F)
        }
        numeroDecimal /= 16; // Dividir el numero por 16
    }

    // Mostrar el resultado en orden inverso
    cout << "El numero hexadecimal es: ";
    for (int i = hexadecimal.size() - 1; i >= 0; i--) {
        cout << hexadecimal[i]; // Imprimir los digitos hexadecimales en orden inverso
    }
    cout << endl;
}

int main() {
    int numeroDecimal;

    // Solicitar al usuario que ingrese un numero decimal
    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    convertirADecimalAHexadecimal(numeroDecimal); // Llamar a la funcion de conversion

     system("pause");
}
