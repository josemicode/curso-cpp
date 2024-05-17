#include <iostream>
#include <array>
#include <set>
#include <vector>
#include "Asignatura.h"

using namespace std;

void ordenarPorCuatrimestre(vector<Asignatura> asig)
{
    vector<Asignatura>::iterator aux, where;
    for (int i = 1; i < asig.size(); i++)
    {
        where = asig.begin();
        aux = asig.begin() + 1;

        for (int j = 0; j <= i; j++)
        {
            if((*aux) < (*where)){
                break;
            }
            advance(where, 1);
        }
        Asignatura nuevo = *aux;
        asig.erase(aux);
        asig.insert(where, nuevo);
    }
}

int main()
{
    int eleccion = 3;
    switch (eleccion)
    {
    case 1:
    {
        array<Asignatura, 5> asignaturas; // Creamos un contenedor tipo array
        // Lo inicializamos
        asignaturas = {Asignatura("Matematicas II", 2, 4), Asignatura("Introduccion a los Sistemas", 2, 1), Asignatura("Electronica y Electromagnetismo", 2, 5), Asignatura("Economia", 1, 2), Asignatura("Fundamentos de la Programacion I", 1, 3)};
        // Accedemos a sus datos de forma iterativa con este bucle for, haciendo uso del método .size() propio de arrays
        for (int i = 0; i < asignaturas.size(); i++)
        {
            cout << asignaturas[i]; // Debemos haber implementado el operador << de tipo ostream (clase amiga)
        }
        break;
    }
    case 3:
    {
        set<Asignatura> asignaturas; // Creamos un set
        // Lo llenamos de elementos distintos
        asignaturas.insert(Asignatura("Matematicas I", 1, 3));
        asignaturas.insert(Asignatura("Matematicas II", 2, 4));
        asignaturas.insert(Asignatura("Sistemas Electronicos y Digitales", 1, 2));
        asignaturas.insert(Asignatura("Introduccion a los Sistemas", 2, 1));
        asignaturas.insert(Asignatura("Economia", 1, 2));
        asignaturas.insert(Asignatura("Electronica y Electromagnetismo", 2, 5));
        asignaturas.insert(Asignatura("Fundamentos de la Programacion I", 1, 2));
        asignaturas.insert(Asignatura("Fundamentos de la Programacion II", 2, 3));
        asignaturas.insert(Asignatura("Economia", 1, 2)); // Esta asignatura se intentará insertar en el set, de forma no exitosa pues ya existe

        set<Asignatura>::iterator it_set = asignaturas.begin(); // Inicializamos un iterador asignado al contenedor, esto debe hacerse tras haber llenado el set de elementos

        for (int i = 0; i < asignaturas.size(); i++)
        {
            cout << *it_set;
            advance(it_set, 1);
        }
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