#include <iostream>
#include "Vector2D.h" // Incluye la definición de la clase Vector2D

using namespace std;

// Función plantilla para calcular la media aritmética de los elementos de un arreglo
template <typename T> 
T mediaAritmeticaElementos(T a[], int n){
	T media = 0;
	for(int i = 0; i < n ; i++){
		media += a[i];
	}
	return media/n;
}

// Función plantilla para calcular la suma de los elementos de un arreglo
template <typename T> 
T suma(T a[], int n){
	T suma(0,0);
	for(int i = 0; i < n; i++){
		suma = suma + a[i];
	}
	return suma;
}

// Función plantilla para calcular la varianza de un conjunto de datos
template<typename T> 
T varianza(T a[], float media, int n){
	T sumaDiferenciasCuadrado = 0;
	for (int i = 0; i < n; ++i) {
		sumaDiferenciasCuadrado += (a[i] - media) * (a[i] - media);
	}
	T varianza = sumaDiferenciasCuadrado / n;
	return varianza;
}

// Función plantilla para intercambiar dos objetos
template<typename T> 
void intercambiarObjetos(T *a, T *b){
	T aux = *a;
	*a = *b;
	*b = aux;
}

// Función plantilla para obtener las direcciones de memoria de dos objetos
template <typename T, typename U> 
void obtenerDirecciones(T &obj1, U &obj2, T** ptr1, U** ptr2) {
	*ptr1 = &obj1;
	*ptr2 = &obj2;
}

// Función plantilla para imprimir el doble y la mitad del factor de tolerancia de una clase dada
template <class T> 
void printFactorTolerancia() {
	cout << "El doble del factor de tolerancia es: " << 2 * T::factor_tolerancia << endl;
	cout << "La mitad del factor de tolerancia es: " << T::factor_tolerancia / 2 << endl;
}

// Clase Entero con un miembro estático factor_tolerancia y un método toString()
class Entero {
	public:
		static double factor_tolerancia;
		string toString(){
			return ("Esta es la clase <<Entero>>");
		}
};

double Entero::factor_tolerancia = 0.5;

// Clase Decimal con un miembro estático factor_tolerancia y un método toString()
class Decimal {
	public:
		static double factor_tolerancia;
		string toString(){
			return ("Esta es la clase <<Decimal>>");
		}
};

double Decimal::factor_tolerancia = 0.1;

// Función plantilla para imprimir una descripción de un objeto de una clase dada
template <class T> 
plantillaToString(T clase){
	cout << "Desde la funcion plantilla: " << clase.toString() << endl;
}

int main(){
	// Variable para seleccionar la opción del menú
	int ejercicio = 3;
	// Switch para manejar las diferentes opciones del menú
	switch(ejercicio){
		case 1:{
			       int a[] = {1,2,3,4,5};
			       float b[]={1.5,2.6,3.7};
			       double c[]={1.1247, 3.1245};

			       cout << "La media de los int es: " << mediaAritmeticaElementos(a, 5) << "\n";
			       cout << "La media de los float es: " << mediaAritmeticaElementos(b, 3) << "\n";
			       cout << "La media de los double es: " << mediaAritmeticaElementos(c, 2) << "\n";
			       break;
		       }
		case 2:{
			       Vector2D vectores[] = {Vector2D(2,3), Vector2D(1,4), Vector2D(2,1), Vector2D(6,8), Vector2D(4,3)};

			       Vector2D total_suma = suma(vectores, 5);
			       Vector2D media = total_suma * (1.0 / 5);

			       cout << "El resultado es: " << media;
			       break;
		       }
		case 3:{
			       int a[] = {4, 10, 1, 6, 8};

			       double media = 0;
			       for (int i = 0; i < 5; ++i) {
				       media += a[i];
			       }
			       media /= 5;
			       double resultado = varianza(a, media, 5);
			       cout << "La varianza es: " << resultado << endl;
			       break;
		       }
		case 4:{
			       float n1 = 5;
			       float n2 = 10;

			       cout << "Numeros antes del intercambio: " << endl;
			       cout << "n1 = " << n1 << endl;
			       cout << "n2 = " << n2 << endl;

			       intercambiarObjetos(&n1, &n2);

			       cout << "Numeros despues del intercambio: " << endl;
			       cout << "n1 = " << n1 << endl;
			       cout << "n2 = " << n2 << endl;

			       string s1 = "hola";
			       string s2 = "adios";

			       cout << "Strings antes del intercambio: " << endl;
			       cout << "s1 = " << s1 << endl;
			       cout << "s2 = " << s2 << endl;

			       intercambiarObjetos(&s1, &s2);

			       cout << "Strings despues del intercambio: " << endl;
			       cout << "s1 = " << s1 << endl;
			       cout << "s2 = " << s2 << endl;

			       Vector2D v1 = Vector2D(1, 2);
			       Vector2D v2 = Vector2D(3, 4);

			       cout << "Vectores antes del intercambio: " << endl;
			       cout << "v1 = " << v1 << endl;
			       cout << "v2 = " << v2 << endl;

			       intercambiarObjetos(&v1, &v2);

			       cout << "Vectores despues del intercambio: " << endl;
			       cout << "v1 = " << v1 << endl;
			       cout << "v2 = " << v2 << endl;
			       break;
		       }
		case 5:{
			       int a = 10;
			       Vector2D v = Vector2D();
			       int* ptr_a = nullptr;
			       Vector2D* ptr_v = nullptr;

			       obtenerDirecciones(a, v, &ptr_a, &ptr_v);

			       cout << "Dirección de 'a': " << ptr_a << endl;
			       cout << "Dirección de 'v': " << ptr_v << endl;
			       break;
		       }
		case 6:{
			       cout << "Para la clase Entero:" << endl;
			       printFactorTolerancia<Entero>();

			       cout << "Para la clase Decimal:" << endl;
			       printFactorTolerancia<Decimal>();
			       break;
		       }
		case 7:{
			       Entero e;
			       Decimal d;

			       plantillaToString(e);
			       plantillaToString(d);
			       break;
		       }
		default:
		       cout << "..." << endl;
		       break;
	}
	return 0;
}

