#ifndef AVATAR_H
#define AVATAR_H
#include "Tablero.h"
#include <string>
#include "Movimiento.h"
#include "Menus.h"
#include "Aleatorio.h" 

class Avatar{
    private:
        Tablero tablero1;
        Aleatorio aleatorio;//de esta genera el aleatorio para poder escoger solucion automatica o manual 
        Menus menu1;
        Movimiento moverse; //esta parte depende de la seleccion de manual o automatico
        std::string nombre;

    public:

        Avatar();
        void jugar();
        

};





#endif //AVATAR_H