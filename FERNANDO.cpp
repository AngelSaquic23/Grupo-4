#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int opcion;

    cout << "Calculador"<<endl;
    cout << "Ingrese el primer n�mero: "<<endl;
    cin >> num1;
    cout << "Ingrese el segundo n�mero: "<<endl;
    cin >> num2;

    cout << "Seleccione la operaci�n:"<<endl;
    cout << "1. Suma"<<endl;
    cout << "2. Resta"<<endl;
    cout << "3. Multiplicaci�n"<<endl;
    cout << "4. Divisi�n"<<endl;
    cout << "Opci�n: "<<endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicaci�n: " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 != 0)
                cout << "Resultado de la divisi�n: " << num1 / num2 << endl;
            else
                cout << "Error: No se puede dividir entre cero." << endl;
            break;
        default:
            cout << "Opci�n inv�lida." << endl;
            break;
    }

    return 0;
}
