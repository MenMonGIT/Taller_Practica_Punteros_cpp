#include "Aleatorio.h"
#include <cstdlib>
#include <ctime>

// Genera un número aleatorio entre min y max, usa srand con time(0) para semilla
int Aleatorio::generarNumero(int min, int max) {
    static bool semilla = false;
    if (!semilla) {
        srand(time(0));
        semilla = true;
    }
    return min + rand() % (max - min + 1);
}