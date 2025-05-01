#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
private:
    static const int FILAS = 10;
    static const int COLUMNAS = 10;
    int matriz[FILAS][COLUMNAS];

public:
    Tablero();
    void setValores(const int nuevosValores[FILAS][COLUMNAS]);
    void imprimir() const;
};

#endif //TABLERO_H
