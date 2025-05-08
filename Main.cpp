#include "Avatar.h"
#include "Menus.h"
#include <iostream>
#include <cstdlib>

int main(){
    Menus menus;
    menus.inicio();
    std::cout<<"Felicidades, has llegado a la meta!"<<std::endl;
    std::cout<<"Presiona enter para salir..."<<std::endl;
    std::cin.ignore();
    return 0;
}