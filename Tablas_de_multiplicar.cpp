#include <iostream>
using namespace std;

int main() {
    // Iterar sobre los n�meros del 1 al 10
    for (int i = 1; i <= 10; ++i) {
        cout << "Tabla del " << i << ":\n";
        
        // Calcular la tabla de multiplicar para el n�mero i
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        
        cout << endl; // Espacio entre tablas
    }

    return 0;
}
