#include <iostream>
#include <vector>

using namespace std;

class Asignatura
{
private:
    string nombre;
    int cuatrimestre;
    float dificultad_esperada;
public:
    //Constructors
    Asignatura();
    Asignatura(string nombre, int cuatrimestre, float dificultad_esperada);
    Asignatura& operator=(const Asignatura& otro);

    //Getters
    string getNombre() const;
    int getCuatrimestre() const;
    float getDificultadEsperada() const;

    //Setter
    void setNombre(string _nombre);
    void setCuatrimeestre(int _cuatrimestre);
    void setDificultadEsperada(float _dificultad_esperada);

    //Ops
    bool operator<(const Asignatura& otro) const;
    bool operator==(const Asignatura& otro) const;
    friend ostream& operator<<(ostream& os, const Asignatura& asig);
};
