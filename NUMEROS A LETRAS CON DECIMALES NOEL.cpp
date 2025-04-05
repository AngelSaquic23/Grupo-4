#include <iostream>
#include <string>
#include <cmath>

std::string convertirAletras(int numero) {
    const std::string unidades[] = {
        "", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"
    };
    const std::string decenas[] = {
        "", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"
    };
    const std::string decenasCompuestas[] = {
        "diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"
    };
    const std::string centenas[] = {
        "", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"
    };
    
    if (numero == 0) {
        return "cero";
    }

    std::string resultado = "";

    // Manejo de miles
    if (numero >= 1000) {
        resultado += unidades[numero / 1000] + " mil ";
        numero %= 1000;
    }

    // Manejo de centenas
    if (numero >= 100) {
        resultado += centenas[numero / 100] + " ";
        numero %= 100;
    }

    // Manejo de decenas
    if (numero >= 20) {
        resultado += decenas[numero / 10] + " ";
        numero %= 10;
    } else if (numero >= 10) {
        resultado += decenasCompuestas[numero - 10] + " ";
        return resultado;
    }

    // Manejo de unidades
    if (numero > 0) {
        resultado += unidades[numero] + " ";
    }

    return resultado;
}

std::string convertirDecimales(double decimal) {
    int decimales = round((decimal - static_cast<int>(decimal)) * 100);
    std::string resultado = "";

    if (decimales > 0) {
        resultado += "con " + convertirAletras(decimales) + " centavos";
    }

    return resultado;
}

int main() {
    double numero;

    std::cout << "Ingrese un numero entero con decimales (0-9999.99): ";
    std::cin >> numero;

    if (numero < 0 || numero > 9999.99) {
        std::cout << "Por favor, ingrese un numero dentro del rango permitido." << std::endl;
    } else {
        int parteEntera = static_cast<int>(numero);
        std::string resultado = convertirAletras(parteEntera);
        resultado += convertirDecimales(numero);
        std::cout << "El numero " << numero << " en letras es: " << resultado << std::endl;
    }

    return 0;
}

