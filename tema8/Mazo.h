typedef struct{
	char cara;
	int valor;
}Carta;

class Mazo{
private:
	Carta cartas[48];
	Carta* carta_superior;

public:
	int llenarMazo(); // Crear mazo de 48 (12 oros, 12 copas, 12 espadas, 12 bastón) [point to first]
	Carta getCarta(int numero); // Devuelve dicha carta (copia)
	Carta* robarCarta(); // Devuelve la carta superior, apunta a la siguiente
	void mezclarMazo(); // Baraja (rand())
};