#include <iostream>
#include <cstdlib>
using namespace std;

class TresEnRaya {
private:
    char tablero[9];
    string jugador1, jugador2;
    char simboloActual;

public:
    TresEnRaya(string n1, string n2) {
        jugador1 = n1;
        jugador2 = n2;
        simboloActual = 'X';
        for (int i = 0; i < 9; i++)
            tablero[i] = '1' + i;
    }

    void mostrarTablero() {
        cout << "\n";
        for (int i = 0; i < 9; i++) {
            cout << " " << tablero[i];
            if ((i + 1) % 3 == 0) {
                cout << "\n";
                if (i < 6) cout << "-----------\n";
            } else {
                cout << " |";
            }
        }
        cout << "\n";
    }

    bool colocarFicha (int posicion) {
        if (posicion < 1 || posicion > 9) {
            cout << "Posicion invalida.\n";
            return false;
        }
        if (tablero[posicion - 1] == 'X' || tablero[posicion - 1] == 'O'){
            cout << "Posicion ocupada.\n";
            return false;
        }
        tablero[posicion - 1] = simboloActual;
        return true;
    }


    char verificarGanador () {
        int l[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
        for (int i = 0; i < 8; i++)
            if (tablero[l[i][0]] == tablero[l[i][1]] && tablero[l[i][1]] == tablero[l[i][2]])
                return tablero[l[i][0]];
        return ' ';
    }


    bool tableroLleno() {
        for (int i = 0; i < 9; i++)
            if (tablero[i] != 'X' && tablero[i] != 'O') return false;
        return true;
    }

    void reiniciar() {
        for (int i = 0; i < 9; i++)
            tablero[i] = '1' + i;
        simboloActual = 'X';
    }

    void cambiarTurno() { simboloActual = (simboloActual == 'X') ? 'O' : 'X'; }
    void setSimbolo(char s) { simboloActual = s; }
    char getSimbolo() { return simboloActual; }
    string getJugadorActual() { return (simboloActual == 'X') ? jugador1 : jugador2; }
    string getJugador1() { return jugador1; }
    string getJugador2() { return jugador2; }
};

void actualizarPuntaje(int* ptrPuntaje){
    *ptrPuntaje += 1;
}

int main(){
    string n1, n2;
    cout << "Jugador 1: "; cin >> n1;
    cout << "Jugador 2: "; cin >> n2;

    TresEnRaya juego (n1, n2);
    int p1 = 0, p2 = 0;
    int* ptr1 = &p1;
    int* ptr2 = &p2;

    int opcion;
    while (true) {
        cout << "\n1. Jugar  2. Ver puntajes  3. Salir\nOpcion: ";
        cin >> opcion;

        if (opcion == 3) { cout << "Hasta luego!\n"; break; }

        if (opcion == 2) {
            cout << n1 << ": " << p1 << " | " << n2 << ": " << p2 << "\n";
        }

        if (opcion == 1) {
            juego.reiniciar();
            juego.setSimbolo((rand() % 2 == 0) ? 'X' : 'O');
            cout << "Comienza: " << juego.getJugadorActual() << "\n";

            while (true) {
                juego.mostrarTablero();
                int pos;
                cout << juego.getJugadorActual() << " elige (1-9): ";
                cin >> pos;

                if (!juego.colocarFicha(pos)) continue;

                char g = juego.verificarGanador();
                if (g != ' ') {
                    juego.mostrarTablero();
                    cout << juego.getJugadorActual() << " GANA!\n";
                    if (g == 'X') actualizarPuntaje(ptr1);
                    else actualizarPuntaje(ptr2);
                    break;
                }
                if (juego.tableroLleno()) {
                    juego.mostrarTablero();
                    cout << "Empate!\n";
                    break;
                }
                juego.cambiarTurno();
            }
        }
    }
    return 0;
}
