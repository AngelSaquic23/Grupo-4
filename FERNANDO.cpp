#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int opcion;

    cout << "Calculador"<<endl;
    cout << "Ingrese el primer número: "<<endl;
    cin >> num1;
    cout << "Ingrese el segundo número: "<<endl;
    cin >> num2;

    cout << "Seleccione la operación:"<<endl;
    cout << "1. Suma"<<endl;
    cout << "2. Resta"<<endl;
    cout << "3. Multiplicación"<<endl;
    cout << "4. División"<<endl;
    cout << "Opción: "<<endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicación: " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 != 0)
                cout << "Resultado de la división: " << num1 / num2 << endl;
            else
                cout << "Error: No se puede dividir entre cero." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }

    system("pause");
}
