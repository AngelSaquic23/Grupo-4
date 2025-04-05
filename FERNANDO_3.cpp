#include <iostream>
using namespace std;

int main() {
    int opcion;
    double valor, resultado;

    cout << "CONVERSOR DE UNIDADES"<<endl;
    cout << "Seleccione una opcion :"<<endl;
    cout << "1. Kilometros a Millas "<<endl;
    cout << "2. Millas a Kilometros"<<endl;
    cout << "3. Metros a Pulgadas"<<endl;
    cout << "4. Pulgadas a Metros"<<endl;
    cout << "5. Libras a Kilogramos"<<endl;
    cout << "6. Kilogramos a Libras"<<endl;
    cout << "Opción: "<<endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese kilometros: "<<endl;
            cin >> valor;
            resultado = valor * 0.621371;
            cout << valor << " kilometros = " << resultado << " millas"<<endl;
            break;
        case 2:
            cout << "Ingrese millas: "<<endl;
            cin >> valor;
            resultado = valor / 0.621371;
            cout << valor << " millas = " << resultado << " kilómetros"<<endl;
            break;
        case 3:
            cout << "Ingrese metros: "<<endl;
            cin >> valor;
            resultado = valor * 39.3701;
            cout << valor << " metros = " << resultado << " pulgadas"<<endl;
            break;
        case 4:
            cout << "Ingrese pulgadas: "<<endl;
            cin >> valor;
            resultado = valor / 39.3701;
            cout << valor << " pulgadas = " << resultado << " metros"<<endl;
            break;
        case 5:
            cout << "Ingrese libras: "<<endl;
            cin >> valor;
            resultado = valor * 0.453592;
            cout << valor << " libras = " << resultado << " kilogramos"<<endl;
            break;
        case 6:
            cout << "Ingrese kilogramos: "<<endl;
            cin >> valor;
            resultado = valor / 0.453592;
            cout << valor << " kilogramos = " << resultado << " libras"<<endl;
            break;
        default:
            cout << "Opción invalida:"<<endl;
            break;
    }

    return 0;
}
