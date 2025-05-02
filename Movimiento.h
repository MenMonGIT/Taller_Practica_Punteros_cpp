#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include "Tablero.h"

class Movimiento {
private:
    Tablero* tablero; // Puntero al tablero
    int posX, posY;   // Posición actual
    
public:
    Movimiento(Tablero* t, int xInicial, int yInicial); // Constructor
    
    // Métodos de movimiento:
    bool moverArriba();     // Mueve arriba
    bool moverAbajo();      // Mueve abajo
    bool moverIzquierda();  // Mueve izquierda
    bool moverDerecha();    // Mueve derecha
    
    // Getters:
    int getPosX() const { return posX; } // Devuelve posición X
    int getPosY() const { return posY; } // Devuelve posición Y
};

#endif