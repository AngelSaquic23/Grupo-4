#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: "<<endl;
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número " << numero << " es PAR." << endl;
    } else {
        cout << "El número " << numero << " es IMPAR." << endl;
    }

    system("pause");
}
