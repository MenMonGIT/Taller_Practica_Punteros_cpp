#include "Avatar.h"
#include "Movimiento.h"
#include "Tablero.h"
#include <iostream>


Avatar::Avatar(){
    std::cout<<"Digita tu nombre jugador: ";
    std::cin>>this->nombre;
    jugar();
}
void Avatar::jugar(){
    int x=0;
    int y=0;
    aleatorio.generarPosicionValida(tablero1.arreglo(),10,10,x,y);//esto deberia retornar una tupla
    if(menu1.solucion()==2){
        tablero1.dfs(x,y);
    }
}