#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string entrada, invertida;

    cout << "Ingrese una palabra o numero: ";
    cin >> entrada;

    invertida = entrada;
    reverse(invertida.begin(), invertida.end());

    if (entrada == invertida) {
        cout << "\"" << entrada << "\" es un palindromo." << endl;
    } else {
        cout << "\"" << entrada << "\" no es un palindromo." << endl;
    }

    return 0;
}
