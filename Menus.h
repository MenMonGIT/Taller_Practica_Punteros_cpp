#ifndef MENUS_H
#define MENUS_H
#include <string>
class Menus{
    private:
        int opcion;
    public:
        Menus();
        int inicio(std::string nombre);
        int seleccion();
        int solucion();

};







#endif //MENUS_H