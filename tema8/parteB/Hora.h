#include <iostream>

class Hora {
private:
    int hora;
    int minuto;
    int segundo;

public:

    // Getters
    int getHora();
    int getMinuto();
    int getSegundo();

    // Funciones públicas
    void mostrarHora();
    void reiniciar(int nuevaHora, int nuevoMinuto, int nuevoSegundo);
    void sumarSegundos(int segundos);
};