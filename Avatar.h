#ifndef AVATAR_H
#define AVATAR_H
#include "Tablero.h"
#include <string>
#include "Movimiento.h"

class Avatar{
    private:
        Tablero tablero1;    // Tablero del juego
        Movimiento* moverse; // Controla movimientos del avatar
        std::string nombre;  // Nombre del avatar
        int posX, posY;      // Posición actual

    public:
        Avatar(std::string); // Constructor con nombre
        ~Avatar();           // Destructor
        void movimiento();   // Método para movimiento (no implementado)

        // Métodos de movimiento:
        bool moverArriba();    // Mueve arriba
        bool moverAbajo();      // Mueve abajo
        bool moverIzquierda();  // Mueve izquierda
        bool moverDerecha();    // Mueve derecha
        
        // Getters:
        int getPosX() const { return posX; }      // Devuelve posición X
        int getPosY() const { return posY; }      // Devuelve posición Y
        Tablero& getTablero() { return tablero1; } // Devuelve referencia al tablero
};
#endif