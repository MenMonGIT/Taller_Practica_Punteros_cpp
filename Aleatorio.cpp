#include "Aleatorio.h"
#include <cstdlib>
#include <ctime>

Aleatorio::Aleatorio(){
  std::srand(std::time(0)); // inicializar la semilla aleatoria una vez
}

void Aleatorio::generarPosicionValida(int laberinto[][10], int filas, int columnas, int& x, int& y) {
    do {
        x = rand() % filas;
        y = rand() % columnas;
    } while (laberinto[x][y] == 0); // evita caer en una celda "precipicio"
}
