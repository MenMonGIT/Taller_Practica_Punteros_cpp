#include <iostream>
#include "Tablero.h"

int main() {
    Tablero t;
    t.dfs(0, 0);  // Empieza desde la esquina superior izquierda
    return 0;
}
