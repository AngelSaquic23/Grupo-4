#include <iostream>
#include <conio.h>  // Para detectar teclas sin presionar ENTER
#include <windows.h> // Para mover el cursor

using namespace std;

// Función para mover el cursor a una posición específica
void moverCursor(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x = 30, y = 9; // Posición inicial del punto
    char tecla;

    system("cls"); // Limpiar la pantalla

    while (true) {
        moverCursor(0, 20); // Mover cursor a una posición baja para no interferir
        cout << "Usa W, A, S, D para mover el punto. Presiona 'X' para salir.\n";

        moverCursor(x, y); // Mover el cursor a la posición actual
        cout << "o";        // Dibujar el punto

        tecla = _getch(); // Capturar la tecla sin necesidad de presionar ENTER

        // Borrar el punto anterior
        moverCursor(x, y);
        cout << " ";

        // Detectar teclas para mover el punto
        if (tecla == 'w' || tecla == 'W') y = max(0, y - 1); // Mover arriba
        if (tecla == 's' || tecla == 'S') y = min(19, y + 1); // Mover abajo
        if (tecla == 'a' || tecla == 'A') x = max(0, x - 1); // Mover izquierda
        if (tecla == 'd' || tecla == 'D') x = min(39, x + 1); // Mover derecha
        if (tecla == 'x' || tecla == 'X') break; // Salir con 'X'
    }

system("pause");
}

