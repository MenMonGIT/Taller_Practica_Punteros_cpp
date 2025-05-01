#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
private:
    static const int FILAS = 10;
    static const int COLUMNAS = 10;
    int matriz[FILAS][COLUMNAS];

public:
    Tablero();  // Constructor
    void imprimir(int x, int y);  // Imprimir la matriz y colocar el 2 en (x, y)
};

#endif
