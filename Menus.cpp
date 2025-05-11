#include "Menus.h"
#include <iostream>
using namespace std;
int Menus::inicio() {
    int opcion;
    cout << "1. INICIAR JUEGO\n";
    cout << "2. SALIR\n";
    cout << "Digite su opcion: ";
    cin >> opcion;
    return opcion;
}

int Menus::preguntarModoJuego() {
    int opcion;
    cout << "\nSELECCIONE MODO DE JUEGO:\n";
    cout << "1. Manual (moverse paso a paso)\n";
    cout << "2. Automático (ver solución completa)\n";
    cout << "Digite su opcion: ";
    cin >> opcion;
    return opcion;
}

int Menus::seleccion() {
    int opcion;
    cout << "\nMOVIMIENTO:\n";
    cout << "1. Arriba\n";
    cout << "2. Abajo\n";
    cout << "3. Izquierda\n";
    cout << "4. Derecha\n";
    cout << "Digite su opcion: ";
    cin >> opcion;
    return opcion;
}

void Menus::mostrarMovimientoInvalido() {
    cout << "\n¡Movimiento inválido! Intente otra dirección.\n";
    cout << "Presione Enter para continuar...";
    cin.ignore();
    cin.get();
}