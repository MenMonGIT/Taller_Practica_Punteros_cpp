#include "Avatar.h"
#include "Menus.h"
#include "Tablero.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    Menus menus;
    int opcion = menus.inicio();
    
    if (opcion == 1) {
        Avatar avatar;
        Tablero& t = avatar.getTablero();
        
        // Preguntar modo de juego al inicio
        system("cls||clear");
        t.imprimir(avatar.getPosX(), avatar.getPosY());
        cout << "\nPosición inicial: (" << avatar.getPosX() << ", " << avatar.getPosY() << ")";
        cout << "\nMeta en: (9, 9)\n";
        
        int modoJuego = menus.preguntarModoJuego();
        
        if (modoJuego == 2) { // Modo automático
            system("cls||clear");
            cout << "╔════════════════════════════════╗\n";
            cout << "║      SOLUCIÓN AUTOMÁTICA       ║\n";
            cout << "║         (Algoritmo DFS)        ║\n";
            cout << "╚════════════════════════════════╝\n\n";
            cout << "Mostrando proceso completo...\n";
            sleep(2);
            
            // Ejecutar DFS con visualización
            t.dfs(avatar.getPosX(), avatar.getPosY());
            
            // Mostrar resultado final
            system("cls||clear");
            t.imprimir(9, 9);
            cout << "\n╔══════════════════════════════╗\n";
            cout << "║   ¡SOLUCIÓN ENCONTRADA!     ║\n";
            cout << "╚══════════════════════════════╝\n";
        }
        else { // Modo manual
            while(avatar.getPosX() != 9 || avatar.getPosY() != 9) {
                system("cls||clear");
                t.imprimir(avatar.getPosX(), avatar.getPosY());
                cout << "\nPosición actual: (" << avatar.getPosX() << ", " << avatar.getPosY() << ")";
                cout << "\nMeta en: (9, 9)\n";
                
                int direccion = menus.seleccion();
                bool movimientoValido = false;
                
                switch(direccion) {
                    case 1: movimientoValido = avatar.moverArriba(); break;
                    case 2: movimientoValido = avatar.moverAbajo(); break;
                    case 3: movimientoValido = avatar.moverIzquierda(); break;
                    case 4: movimientoValido = avatar.moverDerecha(); break;
                    default: break;
                }
                
                if(!movimientoValido) {
                    menus.mostrarMovimientoInvalido();
                }
            }
            system("cls||clear");
            t.imprimir(9, 9);
            cout << "\n╔══════════════════════════════╗\n";
            cout << "║   ¡HAS LLEGADO A LA META!   ║\n";
            cout << "╚══════════════════════════════╝\n";
        }
    }
    
    cout << "\nPresiona Enter para salir...";
    cin.ignore();
    cin.get();
    return 0;
}