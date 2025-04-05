#include <iostream>
#include <string>

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

int main() {
    int numero;

    std::cout << "Ingrese un numero entero (0-9999): ";
    std::cin >> numero;

    if (numero < 0 || numero > 9999) {
        std::cout << "Por favor, ingrese un numero dentro del rango permitido." << std::endl;
    } else {
        std::string resultado = convertirAletras(numero);
        std::cout << "El numero " << numero << " en letras es: " << resultado << std::endl;
    }

    return 0;
}

