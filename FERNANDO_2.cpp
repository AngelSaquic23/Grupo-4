#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un n�mero entero: "<<endl;
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El n�mero " << numero << " es PAR." << endl;
    } else {
        cout << "El n�mero " << numero << " es IMPAR." << endl;
    }

    return 0;
}
