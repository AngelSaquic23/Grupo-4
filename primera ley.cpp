#include <iostream>
using namespace std;

int main() {
    float fuerza;

    cout << "Primera Ley de Newton (Inercia)" << endl;
    cout << "Ingrese la fuerza neta aplicada al objeto (N): ";
    cin >> fuerza;

    if (fuerza == 0)
        cout << "El objeto permanece en reposo o en movimiento uniforme." << endl;
    else
        cout << "El objeto cambiará su estado de movimiento." << endl;

     system("pause");
}

