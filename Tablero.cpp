#include <iostream>
#include "Tablero.h"


// Constructor que carga una matriz con valores fijos
Tablero::Tablero() {
    // Matriz con los valores predeterminados
    int misValores[10][10] = {
        {0,0,0,1,1,0,1,0,0,0},
        {1,1,0,0,0,0,0,1,1,0},
        {0,1,1,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,1,0,1},
        {0,1,1,1,1,1,0,0,0,0},
        {0,1,0,0,0,1,1,0,1,0},
        {0,1,0,1,0,1,0,0,0,1},
        {0,0,0,1,0,0,0,1,1,1},
        {1,0,1,1,0,1,1,0,0,0},
        {1,0,0,1,0,0,0,0,1,0}
    };

    // Cargar los valores en la matriz
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = misValores[i][j];
        }
    }
}

// Método para imprimir el tablero con símbolos
void Tablero::imprimir(int x, int y) {

     // Primero, borra cualquier 2 que esté en la matriz antes de colocar un nuevo 2
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 2) {
                matriz[i][j] = 0;  // Restablece el valor a 0
            }
        }
    }

    
    // Verificar que x y y estén dentro de los límites de la matriz
    if (x >= 0 && x < FILAS && y >= 0 && y < COLUMNAS) {
        matriz[x][y] = 2;  // Coloca un 2 en la posición (x, y)
    } else {
        std::cout << "Índices fuera del mapa!" << std::endl;
    }

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 1)
                std::cout << "# ";  // Imprimir "#" en lugar de "1"
            else if (matriz[i][j] == 2)
                std::cout << "X ";  // Imprimir "X" en lugar de "2"
            else
                std::cout << ". ";  // Imprimir "." en lugar de "0"
        }
        std::cout << std::endl;
    }
}