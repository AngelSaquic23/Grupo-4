#include <iostream>
#include <vector>
using namespace std;

void convertirDaB(int numeroDecimal) {
    vector <int> binario; // Vector para almacenar los digitos binarios

    // Manejar el caso especial para 0
    if (numeroDecimal == 0) {
        cout << "El numero binario es: 0" << endl;
        return;
    }

    // Convertir el numero decimal a binario
    while (numeroDecimal > 0) {
        int residuo = numeroDecimal % 2; // Obtener el residuo
        binario.push_back(residuo); // Almacenar el residuo en el vector
        numeroDecimal /= 2; // Dividir el numero por 2
    }

    // Mostrar el resultado en orden inverso
    cout << "El numero binario es: ";
    for (int i = binario.size() - 1; i >= 0; i--) {
        cout << binario[i]; // Imprimir los digitos binarios en orden inverso
    }
    cout << endl;
}

int main() {
    int numeroDecimal;

    // Solicitar al usuario que ingrese un numero decimal
    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    convertirDaB(numeroDecimal); // Llamar a la funcion de conversion

     system("pause");
}
