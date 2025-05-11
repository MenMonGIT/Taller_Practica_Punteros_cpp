#include "Movimiento.h"

// Constructor: inicializa con tablero y posición
Movimiento::Movimiento(Tablero* t, int xInicial, int yInicial) 
    : tablero(t), posX(xInicial), posY(yInicial) {
    tablero->marcarPosicion(posX, posY);
}

// Mueve arriba si es posible, actualiza tablero
bool Movimiento::moverArriba() {
    if (tablero->esCaminoValido(posX-1, posY)) {
        tablero->limpiarPosicion(posX, posY);
        posX--;
        tablero->marcarPosicion(posX, posY);
        return true;
    }
    return false;
}

// Mueve abajo si es posible, actualiza tablero
bool Movimiento::moverAbajo() {
    if (tablero->esCaminoValido(posX+1, posY)) {
        tablero->limpiarPosicion(posX, posY);
        posX++;
        tablero->marcarPosicion(posX, posY);
        return true;
    }
    return false;
}

// Mueve izquierda si es posible, actualiza tablero
bool Movimiento::moverIzquierda() {
    if (tablero->esCaminoValido(posX, posY-1)) {
        tablero->limpiarPosicion(posX, posY);
        posY--;
        tablero->marcarPosicion(posX, posY);
        return true;
    }
    return false;
}

// Mueve derecha si es posible, actualiza tablero
bool Movimiento::moverDerecha() {
    if (tablero->esCaminoValido(posX, posY+1)) {
        tablero->limpiarPosicion(posX, posY);
        posY++;
        tablero->marcarPosicion(posX, posY);
        return true;
    }
    return false;
}