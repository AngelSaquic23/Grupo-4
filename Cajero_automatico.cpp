#include <iostream>
using namespace std;

int main() {
    int pin = 1234; 
    int intentos = 3;
    int saldo = 1000;  // Saldo inicial
    int opcion, monto;
    int ingreso;

    // Verificación de PIN
    while (intentos > 0) {
        cout << "Ingrese su PIN: ";
        cin >> ingreso;
        if (ingreso == pin) {
            cout << "Acceso concedido.\n";
            break;
        } else {
            intentos--;
            cout << "PIN incorrecto. Intentos restantes: " << intentos << endl;
        }
        if (intentos == 0) {
            cout << "Cuenta bloqueada. Intente mas tarde.\n";
            return 0;
        }
    }

    // Menú del cajero
    do {
        cout << "\n--- Cajero Automatico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: Q." << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a depositar: ";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso. Saldo actual: Q." << saldo << endl;
                } else {
                    cout << "Monto no valido.\n";
                }
                break;
            case 3:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Saldo actual: Q." << saldo << endl;
                } else {
                    cout << "Monto no valido o insuficiente.\n";
                }
                break;
            case 4:
                cout << "Gracias por usar el cajero automatico.\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 4);

system("pause");
}

