#include <iostream>
#include <cstdlib>
using namespace std;

void menuNoel();
void menuLudwin();
void menuFernando();
void menuGaby();
void menuAngel();

int main() {
    int opcion;

    do {
        system("cls");
        cout << "===== MENU PRINCIPAL =====\n";
        cout << "1. Fernando de Leon\n";
        cout << "2. Gabriela Alvarado\n";
        cout << "3. Angel Saquic\n";
        cout << "4. Noel Sem\n";
        cout << "5. Ludwin Ajualip\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: menuFernando(); break;
            case 2: menuGaby(); break;
            case 3: menuAngel(); break;
            case 4: menuNoel(); break;
            case 5: menuLudwin(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(opcion != 0);

    return 0;
}

// Submenus

void menuNoel() {
    int op;
    do {
        system("cls");
        cout << "--- Programas de Noel Sem ---\n";
        cout << "1. Arabigo a Romano\n";
        cout << "2. Numeros a Letras con Decimales\n";
        cout << "3. Numeros a Letras\n";
        cout << "4. Una Tabla de Multiplicar\n";
        cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: system("start ARABIGO_A_ROMANO_NOEL.exe"); break;
            case 2: system("start NUMEROS_A_LETRAS_CON_DECIMALES_NOEL.exe"); break;
            case 3: system("start NUMEROS_A_LETRAS_NOEL.exe"); break;
            case 4: system("start UNA_TABLA_DE_MULTIPLICAR_NOEL.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}

void menuLudwin() {
    int op;
    do {
        system("cls");
        cout << "--- Programas de Ludwin Ajualip ---\n";
        cout << "1. Figuras Basicas\n";
        cout << "2. Punto en Pantalla\n";
        cout << "3. Cajero Automatico\n";
        cout << "4. Hipotenusa\n";
        cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: system("start FigurasBasicas.exe"); break;
            case 2: system("start PuntoPantalla.exe"); break;
            case 3: system("start Cajero_automatico.exe"); break;
            case 4: system("start Hipotenusa.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}

void menuFernando() {
    int op;
    do {
        system("cls");
        cout << "--- Programas de Fernando de Leon ---\n";
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros\n";
        cout << "2. Determinar si un numero es par o impar\n";
        cout << "3. Conversion de unidades (km, millas, pulgadas, libras...)\n";
        cout << "4. Verificar si una palabra o numero es palindromo\n";
        cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: system("start FERNANDO.exe"); break;
            case 2: system("start FERNANDO_2.exe"); break;
            case 3: system("start FERNANDO_3.exe"); break;
            case 4: system("start FERNANDO_4.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}

void menuGaby() {
    int op;
    do {
        system("cls");
        cout << "--- Programas de Gabriela Alvarado ---\n";
        cout << "1. Primera Ley De Newton\n";
        cout << "2. Segunda Ley De Newton\n";
        cout << "3. Tercera Ley De Newton\n";
        cout << "4. Cuarta Ley De Newton\n";
        cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: system("start primera_ley.exe"); break;
            case 2: system("start segunda_ley.exe"); break;
            case 3: system("start tercera_ley.exe"); break;
            case 4: system("start cuarta_ley.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}

void menuAngel() {
    int op;
    do {
        system("cls");
        cout << "--- Programas de Angel Saquic ---\n";
        cout << "1. Convertir Decimales a Binarios\n";
        cout << "2. Convertir Decimales a Hexadecimales\n";
        cout << "3. Tablas de Multiplicar\n";
        cout << "4. Grafica de Multiplicacion\n";
        cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: system("start convertirDaB.exe"); break;
            case 2: system("start convertirDaH.exe"); break;
            case 3: system("start Tablas_de_multiplicar.exe"); break;
            case 4: system("start grafica_multiplicacion.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}

