#include "Menus.h"
#include "Avatar.h"
#include <iostream>
using namespace std;

Menus::Menus(){
}

// Muestra menú inicial y procesa opción
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

// Muestra menú de movimiento y devuelve opción
int Menus::seleccion(){
    cout<<"1.Arriba"<<endl;
    cout<<"2.Abajo"<<endl;
    cout<<"3.Izquierda"<<endl;
    cout<<"4.Derecha"<<endl;
    cout<<"Digite su opcion: ";
    cin>>this->opcion;
    return this->opcion;
}

// Muestra menú de solución (no usado en main)
int Menus::solucion(){
    cout<<"1. Solucion Manual"<<endl;
    cout<<"2. Solucion Automatica"<<endl;
    cout<<"Digite su opcion: ";
    cin>>this->opcion;
    return this->opcion;
}

// Muestra mensaje cuando movimiento no es válido
void Menus::mostrarMovimientoInvalido() {
    std::cout << "¡Movimiento inválido! No puedes moverte ahí.\n";
    std::cout << "Presiona Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}