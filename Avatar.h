#ifndef AVATAR_H
#define AVATAR_H
#include "Tablero.h"
#include <string>
#include "Movimiento.h"

class Avatar{
    private:

        Tablero tablero1;
        Movimiento moverse;
        std::string nombre;

    public:

        Avatar(std::string);
        void movimiento();
        

};





#endif //AVATAR_H