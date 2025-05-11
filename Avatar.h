#ifndef AVATAR_H
#define AVATAR_H
#include "Tablero.h"
#include <string>
#include "Movimiento.h"

class Avatar{
    private:
        Tablero tablero1;
        Movimiento* moverse;
        std::string nombre;
        int posX, posY;

    public:
        Avatar();
        ~Avatar();
        bool moverArriba();
        bool moverAbajo();
        bool moverIzquierda();
        bool moverDerecha();
        
        int getPosX() const { return posX; }
        int getPosY() const { return posY; }
        Tablero& getTablero() { return tablero1; }
};
#endif