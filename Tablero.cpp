#include "Tablero.h"
#include <iostream>

// Constructor: inicializa matriz con caminos y precipicios
Tablero::Tablero() {
    int misValores[10][10] = {
        {1,1,1,0,0,1,0,1,1,1},
        {0,0,1,1,1,1,1,0,0,1},
        {1,0,0,0,0,0,1,1,1,1},
        {1,1,1,1,1,1,1,0,1,0},
        {1,0,0,0,0,0,1,1,1,1},
        {1,0,1,1,1,0,0,1,0,1},
        {1,0,1,0,1,0,1,1,1,0},
        {1,1,1,0,1,1,1,0,0,0},
        {0,1,0,0,1,0,0,1,1,1},
        {0,1,1,0,1,1,1,1,0,1}
    };

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = misValores[i][j];
        }
    }
}

// Imprime tablero y marca posición del jugador
void Tablero::imprimir(int x, int y) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 2) matriz[i][j] = 1;
        }
    }

    if (x >= 0 && x < FILAS && y >= 0 && y < COLUMNAS && matriz[x][y] == 1) {
        matriz[x][y] = 2;
    }

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 0) std::cout << "# ";
            else if (matriz[i][j] == 1) std::cout << ". ";
            else if (matriz[i][j] == 2) std::cout << "X ";
        }
        std::cout << std::endl;
    }
}

// Verifica si posición es camino válido
bool Tablero::esCaminoValido(int x, int y) const {
    return (x >= 0 && x < FILAS && y >= 0 && y < COLUMNAS && matriz[x][y] == 1);
}

// Marca posición en el tablero
void Tablero::marcarPosicion(int x, int y) {
    if (esCaminoValido(x, y)) {
        matriz[x][y] = 2;
    }
}

// Limpia posición marcada en el tablero
void Tablero::limpiarPosicion(int x, int y) {
    if (x >= 0 && x < FILAS && y >= 0 && y < COLUMNAS && matriz[x][y] == 2) {
        matriz[x][y] = 1;
    }
}