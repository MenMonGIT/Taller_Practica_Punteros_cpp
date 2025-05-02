#ifndef MENUS_H
#define MENUS_H
#include <string>

class Menus{
    private:
        int opcion; // Almacena opción seleccionada
    public:
        Menus(); // Constructor
        int inicio(std::string nombre); // Muestra menú inicial
        int seleccion();               // Muestra menú de movimiento
        int solucion();                // Muestra menú de solución
        void mostrarMovimientoInvalido(); // Muestra error de movimiento
};
#endif