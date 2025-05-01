#include <iostream>
#include "Tablero.h"

Tablero::Tablero() {
    for (int i = 0; i < FILAS; ++i)
        for (int j = 0; j < COLUMNAS; ++j)
            matriz[i][j] = 0;
}

void Tablero::setValores(const int nuevosValores[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i)
        for (int j = 0; j < COLUMNAS; ++j)
            matriz[i][j] = nuevosValores[i][j];
}

void Tablero::imprimir() const {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] == 1)
                std::cout << "# ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }
}
