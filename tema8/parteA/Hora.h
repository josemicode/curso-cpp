#include<iostream>

class Hora{
private:
	int hora;
	int minuto;
	int segundo;

public:
	//Getters
	int getHora();
	int getMinuto();
	int getSegundo();
	void mostrarHora();
	void reiniciar(int h, int m, int s);
	void sumarSegundos(int segundos);
};