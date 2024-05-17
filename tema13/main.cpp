#include <iostream>
#include <array>
#include "Asignatura.h"

using namespace std;

int main()
{
    int eleccion = 1;
    switch (eleccion)
    {
    case 1:
    {
        array<Asignatura, 5> asignaturas;
        asignaturas = {Asignatura("Matematicas II", 2, 4), Asignatura("Introduccion a los Sistemas", 2, 1), Asignatura("Electronica y Electromagnetismo", 2, 5), Asignatura("Economia", 1, 2), Asignatura("Fundamentos de la Programacion I", 1, 3)};
        for (int i = 0; i < asignaturas.size(); i++)
        {
            cout << asignaturas[i];
        }
        break;
    }
    case 3:
    {
        break;
    }
    case 5:
    {
        break;
    }
    default:
        cout << "Indice erroneo" << endl;
        break;
    }

    return 0;
}