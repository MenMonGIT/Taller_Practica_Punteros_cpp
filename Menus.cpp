#include "Menus.h"
#include "Avatar.h"
#include <iostream>
using namespace std;
Menus::Menus(){
}
int Menus::inicio(string nombre){

    cout<<"1.INICIAR JUEGO"<<endl;
    cout<<"2.SALIR"<<endl;
    cout<<"Digite su opcion:";
    cin>>this->opcion;

    switch(this->opcion){

        case 1:{
            Avatar avatar1(nombre);
            break;
    }
        case 2:
            cout<<"¡Gracias por jugar!" <<endl;
            break;
        default:
            cout<<"Seleccion invalida";
            return 1;
            break;
    }

    return 0;
}
int Menus::seleccion(){

    cout<<"1.Arriba"<<endl;
    cout<<"2.Abajo"<<endl;
    cout<<"3.Izquierda"<<endl;
    cout<<"4.Derecha"<<endl;
    cout<<"Digite su opcion: ";
    cin>>this->opcion;
    return this->opcion;
}

int Menus::solucion(){

    cout<<"1. Solucion Manual"<<endl;
    cout<<"2. Solucion Automatica"<<endl;
    cout<<"Digite su opcion: ";
    cin>>this->opcion;
    return this->opcion;
}
