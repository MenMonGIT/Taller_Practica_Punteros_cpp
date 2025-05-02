#include "Avatar.h"
#include "Menus.h"
#include <iostream>
#include <cstdlib>

int main(){
    Menus menus;
    menus.inicio("julian"); 

    Tablero t;
    t.imprimir(0,0);

    // Crea avatar y ejecuta bucle principal del juego
    Avatar avatar("julian");
    
    while(true) {
        system("cls||clear");
        t.imprimir(avatar.getPosX(), avatar.getPosY());
        
        int direccion = menus.seleccion();
        
        bool movimientoValido = false;
        switch(direccion) {
            case 1: movimientoValido = avatar.moverArriba(); break;
            case 2: movimientoValido = avatar.moverAbajo(); break;
            case 3: movimientoValido = avatar.moverIzquierda(); break;
            case 4: movimientoValido = avatar.moverDerecha(); break;
            default: break;
        }
        
        if(!movimientoValido) {
            menus.mostrarMovimientoInvalido();
        }
    }

    return 0;
}