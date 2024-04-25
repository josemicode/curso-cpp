#include "Hora.h"

// Getters
int Hora::getHora() {
    return hora;
}

int Hora::getMinuto() {
    return minuto;
}

int Hora::getSegundo() {
    return segundo;
}

// Funciones públicas
void Hora::mostrarHora() {
    std::cout << "Hora actual: " << hora << ":" << minuto << ":" << segundo << std::endl;
}

void Hora::reiniciar(int nuevaHora, int nuevoMinuto, int nuevoSegundo) {
    hora = nuevaHora;
    minuto = nuevoMinuto;
    segundo = nuevoSegundo;
}

void Hora::sumarSegundos(int segundos) {
    int totalSegundos = hora * 3600 + minuto * 60 + segundo + segundos;
    hora = totalSegundos / 3600;
    minuto = (totalSegundos % 3600) / 60;
    segundo = (totalSegundos % 3600) % 60;
}