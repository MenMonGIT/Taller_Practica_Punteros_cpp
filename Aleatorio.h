#ifndef ALEATORIO_H
#define ALEATORIO_H
class Aleatorio{
    private:
        //No es necesario añadir atributos, ya que esta clase es una clase utilitaria
        //Es decir, será utilizada directamente a través del método en vez de ser instanciada
    public:
        Aleatorio();  // Constructor por defecto

        // Genera una posición aleatoria válida (celda con valor 1)
        void generarPosicionValida(int laberinto[][10], int filas, int columnas, int& x, int& y);
};





#endif //ALEATORIO_H
