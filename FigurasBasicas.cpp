#include <iostream>
#include <cmath> // Para calcular el círculo

using namespace std;

// Función para dibujar un cuadrado con bordes
void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Función para dibujar un rectángulo con bordes
void dibujarRectangulo(int ancho, int alto) {
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Función para dibujar un triángulo
void dibujarTriangulo(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == altura - 1 || j == 0 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int opcion, tamano, ancho, alto, radio;

    do {
        cout << "-----------------Crear Figuras Geométricas-----------------"<<endl;
        cout << "1. Cuadrado\n";
        cout << "2. Rectangulo\n";
        cout << "3. Triangulo\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el tamano del lado: ";
                cin >> tamano;
                dibujarCuadrado(tamano);
                break;
            case 2:
                cout << "Ingrese el ancho: ";
                cin >> ancho;
                cout << "Ingrese la altura: ";
                cin >> alto;
                dibujarRectangulo(ancho, alto);
                break;
            case 3:
                cout << "Ingrese la altura del triangulo: ";
                cin >> tamano;
                dibujarTriangulo(tamano);
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    system("pause");
}

