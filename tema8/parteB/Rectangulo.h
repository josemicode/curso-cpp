#include<iostream>

class Rectangulo{
private:
	float alto;
	double ancho;
	
public:
	//Getters
	float getAlto();
	double getAncho();
	
	//Setters
	void setAlto(float nuevo_alto);
	void setAncho(double nuevo_ancho);
	
	void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);
	
	float calcularArea();
	float calcularPerimetro();
};