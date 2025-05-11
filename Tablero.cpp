#include "Tablero.h"
#include <iostream>
#include <unistd.h> // Para usleep
#include <cstdlib> // Para system("clear")
using namespace std;

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
            if (matriz[i][j] == 0)
                std::cout << "# ";  // Imprimir "#" en lugar de "1"
            else if (matriz[i][j] == 2)
                std::cout << "X ";  // Imprimir "X" en lugar de "2"
            else
                std::cout << ". ";  // Imprimir "." en lugar de "0"
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
//marcar el camino
void Tablero::marcar() const {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 2)
                std::cout << "_ ";
            else if (matriz[i][j] == 0)
                std::cout << "# ";
            else
                std::cout << ". ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}


//algoritmo de solucion automatica
// Busca un camino desde (0,0) a (9,9) usando DFS
bool Tablero::dfs(int x, int y) {
    if (x < 0 || x >= FILAS || y < 0 || y >= COLUMNAS)
        return false;
    if (matriz[x][y] != 1)
        return false;

    matriz[x][y] = 2;  // Marcar como parte del camino
    system("clear");
    marcar();
    usleep(200000); // 200 ms


    if (x == 9 && y == 9)
        return true;

    if (dfs(x + 1, y)) return true;
    if (dfs(x, y + 1)) return true;
    if (dfs(x - 1, y)) return true;
    if (dfs(x, y - 1)) return true;

    matriz[x][y] = 1; // Backtrack
    return false;
}