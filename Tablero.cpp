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
    system("cls||clear");
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (i == x && j == y) std::cout << "X "; // Posición actual
            else if (matriz[i][j] == 0) std::cout << "# "; // Muro
            else if (matriz[i][j] == 2) std::cout << "o "; // Visitado
            else std::cout << ". "; // Camino libre
        }
        std::cout << "\n";
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
    if (!esCaminoValido(x, y)) return false;
    
    matriz[x][y] = 2; // Marcar como visitado
    imprimir(x, y);
    std::cout << "\nExplorando: (" << x << ", " << y << ")\n";
    usleep(200000);

    if (x == 9 && y == 9) return true;

    // Orden de búsqueda: Abajo -> Derecha -> Arriba -> Izquierda
    if (dfs(x + 1, y)) return true;
    if (dfs(x, y + 1)) return true;
    if (dfs(x - 1, y)) return true;
    if (dfs(x, y - 1)) return true;

    matriz[x][y] = 1; // Backtrack
    imprimir(x, y);
    std::cout << "\nRetrocediendo desde (" << x << ", " << y << ")\n";
    usleep(300000);
    return false;
}