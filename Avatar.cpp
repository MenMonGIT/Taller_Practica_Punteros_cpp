#include "Avatar.h"
#include "Movimiento.h"
#include "Tablero.h"
#include "Aleatorio.h"
#include <iostream>

// Constructor: inicializa avatar con nombre y posición aleatoria válida
Avatar::Avatar(std::string nombre) : nombre(nombre) {
    do {
        posX = Aleatorio::generarNumero(0, 9);
        posY = Aleatorio::generarNumero(0, 9);
    } while (!tablero1.esCaminoValido(posX, posY));
    
    moverse = new Movimiento(&tablero1, posX, posY);
}

// Destructor: libera memoria de Movimiento
Avatar::~Avatar() {
    delete moverse;
}

void Avatar::movimiento() {
}

// Mueve avatar arriba si es posible, actualiza posX
bool Avatar::moverArriba() {
    if(moverse->moverArriba()) {
        posX = moverse->getPosX();
        return true;
    }
    return false;
}

// Mueve avatar abajo si es posible, actualiza posX
bool Avatar::moverAbajo() {
    if(moverse->moverAbajo()) {
        posX = moverse->getPosX();
        return true;
    }
    return false;
}

// Mueve avatar izquierda si es posible, actualiza posY
bool Avatar::moverIzquierda() {
    if(moverse->moverIzquierda()) {
        posY = moverse->getPosY();
        return true;
    }
    return false;
}

// Mueve avatar derecha si es posible, actualiza posY
bool Avatar::moverDerecha() {
    if(moverse->moverDerecha()) {
        posY = moverse->getPosY();
        return true;
    }
    return false;
}