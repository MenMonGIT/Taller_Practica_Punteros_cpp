#ifndef MENUS_H
#define MENUS_H
#include <string>

class Menus {
public:
    int inicio();
    int preguntarModoJuego(); // Nuevo método
    int seleccion();
    void mostrarMovimientoInvalido();
};

#endif