#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath> // Para usar pow
using namespace std;

void mostrarMultiplicacion(int num1, int num2) {
    // Vector para almacenar los productos parciales
    vector<int> productos;

    // Descomponer num2 en sus digitos y calcular los productos parciales
    int tempNum2 = num2;
    int posicion = 0; // Para saber en que posicion estamos (unidad, decena, centena, etc.)

    while (tempNum2 > 0) {
        int unidad = tempNum2 % 10; // Ultimo digito
        int producto = num1 * unidad; // Producto de num1 y el digito actual
        productos.push_back(producto * pow(10, posicion)); // Almacenar el producto ajustado por su posicion
        tempNum2 /= 10; // Eliminar el ultimo digito
        posicion++; // Aumentar la posicion
    }

    // Mostrar la multiplicacion de forma grafica
    cout << "  " << setw(5) << num1 << endl; // Mostrar el primer numero
    cout << " X" << setw(5) << num2 << endl; // Mostrar el segundo numero
    cout << "---------" << endl; // Linea divisoria

    // Mostrar los productos parciales
    for (size_t i = 0; i < productos.size(); i++) {
        // Mostrar cada producto parcial, reemplazando ceros por espacios en blanco
        if (productos[i] == 0) {
            cout << "  " << setw(5) << " " << endl; // Mostrar espacio en blanco
        } else {
            cout << "  " << setw(5) << productos[i] << endl; // Mostrar producto parcial
        }
    }

    // Calcular el resultado final
    int resultadoFinal = 0;
    for (size_t i = 0; i < productos.size(); i++) {
        resultadoFinal += productos[i]; // Sumar todos los productos parciales
    }

    // Mostrar la linea divisoria final
    cout << "---------" << endl;
    cout << "  " << setw(5) << resultadoFinal << endl; // Mostrar el resultado final
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese los numeros
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    mostrarMultiplicacion(num1, num2);

     system("pause");
}
