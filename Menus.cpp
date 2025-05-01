#include "Menus.h"
#include <iostream>
using namespace std;
Menus::Menus(){
}
int Menus::inicio(){
    cout<<"1.INICIAR JUEGO"<<endl;
    cout<<"2.SALIR"<<endl;
    cout<<"Digite su seleccion:"<<endl;
    cin>>this->opcion;
    switch(this->opcion){
        case 1:
            //
        case 2:
            cout<<"¡Gracias por jugar!" <<endl;
        default:
            cout<<"Seleccion invalida";
            return 1;
    }

    return 0;
}
int Menus::seleccion(){return 0;}
int Menus::solucion(){return 0;}
