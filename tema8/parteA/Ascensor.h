#include<iostream>

using namespace std;

class Ascensor{
private:
	int plantaActual;
	bool puertaAbierta;
	
public:
	void seleccionarPlanta(int nuevaPlanta);
	void abrirPuerta();
	void cerrarPuerta();
	int getPlantaActual();
	bool isPuertaAbierta();
};