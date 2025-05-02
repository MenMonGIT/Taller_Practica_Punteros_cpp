#include "Aleatorio.h"
#include <cstdlib> // para usar rand() y srand()
#include <ctime> // para time(0) que inicializa la semilla aleatoria

Aleatorio::Aleatorio(){
  std::srand(std::time(0)); // inicializar la semilla aleatoria una vez, con la hora actual
  //Esto garantiza que cada vez que ejecutes el programa, los números aleatorios no sean siempre los mismos.


}

void Aleatorio::generarPosicionValida(int laberinto[][10], int filas, int columnas, int& x, int& y) {
  //int& x y int&y son referencias que devolveran los valores a las variables externas
    do {
        x = rand() % 10; // elige una fila aleatoria entre 0 y filas-1
        y = rand() % 10; // elige una columna aleatoria entre 0 y columnas-1
    } while (laberinto[x][y] == 0); // evita caer en una celda "precipicio", repitiendo en caso de que el valor de la celda sea 0
}
