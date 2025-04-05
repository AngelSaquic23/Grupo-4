#include <iostream>
#include <string>

std::string convertirARomano(int numero) {
    std::string romano = "";

    // Definición de valores romanos
    const int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Conversión
    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            romano += simbolos[i];
            numero -= valores[i];
        }
    }
    return romano;
}

int main() {
    int numero;

    std::cout << "Ingrese un numero arabigo (1-1000): ";
    std::cin >> numero;

    if (numero < 1 || numero > 1000) {
        std::cout << "Por favor, ingrese un número dentro del rango permitido." << std::endl;
    } else {
        std::string resultado = convertirARomano(numero);
        std::cout << "El número " << numero << " en romano es: " << resultado << std::endl;
    }

    return 0;
}

