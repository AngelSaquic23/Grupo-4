#include <iostream>

int main() {
    int numero, limite;

    std::cout << "Ingrese un numero para generar su tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Ingrese el limite de la tabla de multiplicar: ";
    std::cin >> limite;

    std::cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= limite; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

