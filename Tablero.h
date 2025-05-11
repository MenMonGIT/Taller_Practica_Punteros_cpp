#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
private:
    static const int FILAS = 10;
    static const int COLUMNAS = 10;
    int matriz[FILAS][COLUMNAS]; // Matriz del tablero

public:
    Tablero();  // Constructor
    void imprimir(int x, int y);  // Imprime tablero con jugador en (x,y)
    void marcar()const; // Marca posición del jugador
    bool esCaminoValido(int x, int y) const; // Verifica si celda es transitable
    void marcarPosicion(int x, int y);      // Marca posición del jugador
    void limpiarPosicion(int x, int y);     // Limpia posición del jugador
    bool dfs(int x, int y) ; // Busca camino al final
};

#endif