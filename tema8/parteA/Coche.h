using namespace std;

class Coche{
private:
	std::string color;
	std::string motor;
	double velocidadMaxima;
	double velocidad;
	bool encendido;
	
public:
	//Setters
	void setColor(std::string& nuevoColor);
	void setMotor(std::string& nuevoMotor);
	void setVelocidadMaxima(double nuevaVelocidadMaxima);
	
	void arrancar();
	void apagar();
	void frenar(double decremento);
	void acelerar(double incremento);
	bool isEncendido();
	double obtenerVelocidad();
};