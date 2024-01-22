#include <iostream>

using namespace std;

	int main (){
		
		//Variables
		int a,b;
		float c,d;
		float res;
		bool condicion;
		
		//Lecturas
		cout << "Introduzca el valor de a: ";
		cin >> a;
		cin.ignore();
		cout << "Introduzca el valor de b: ";
		cin >> b;
		cin.ignore();
		cout << "Introduzca el valor de c: ";
		cin >> c;
		cin.ignore();
		cout << "Introduzca el valor de d: ";
		cin >> d;
		cin.ignore();
		
		//Operaciones
		res = (float) a/b;
		cout << "a/b = " << res << endl;	//Al dividir un numero entero por otro puede resultar uno con decimales

		res = (float) a/c;
		cout << "a/c = " << res << endl;	//Al dividir un numero entero por un numero racional es posible que el resultado contenga decimales
		
		res = a%b;
		cout << "a%b = " << res << endl;	//El resto de la division de dos numeros enteros siempre sera otro entero
		
		res = (float) a-b-c+d;
		cout << "a-b-c+d = " << res << endl;	//Los numeros enteros y racionales pueden sumarse con normalidad
		
		res = (float) 5*c - 4*a;
		cout << "5*c - 4*a = " << res << endl;	//Las multiplicaciones tienen prioridad en el orden de ejecucion de la instruccion frente a las sumas
		
		res = (float) a*b/c;
		cout << "a*b/c = " << res << endl;	//Se llevaran a cabo las operaciones en secuencia izquierda --> derecha
		
		res = (float) a*(d/c);
		cout << "a*(d/c) = " << res << endl;	//Se realizara antes la operacion contenida por parentesis
		
		res = a*b%b;
		cout << "a*b%b = " << res << endl;	//Numero entero por ser modulo
		
		a=--b;
		cout << "a=--b " << endl;	//Se modificaran los valores de a y b, siendo a el mismo valor: b-1
		
		b = a--;
		cout << "b = a-- " << endl;
		
		a += b;
		cout << "a += b" << endl;
		
		a = b;
		cout << "a = b " << endl;
		
		res = !a;
		cout << "!a " << endl;
		
		condicion = (a==b) || (c > d);
		cout << "(a==b) || (c > d) : "<< condicion << endl;
		
		condicion = (a>b) && (b>c) || (d<c);
		cout << "(a>b) && (b>c) || (d<c) : "<< condicion << endl;
		
		condicion = a*3 || b*2 && (3*2);
		cout << "a*3 || b*2 && (3*2) : "<< condicion << endl;
		
		//Valores Finales
		cout << "Valores Finales:"<< endl <<"a: " << a << " b: " << b << " c: " << c << " d: " << d;
		
		
		//Fin de Ejecucion
		return 0;
	}