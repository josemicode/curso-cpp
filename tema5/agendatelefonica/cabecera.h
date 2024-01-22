using namespace std;
typedef struct{
	int DNI;
	string Apellidos;
	string Nombre;
	int Telefono;
}registro;
void nuevoElemento(registro agenda[], int n);
void mostrarAgenda(registro agenda[], int n);