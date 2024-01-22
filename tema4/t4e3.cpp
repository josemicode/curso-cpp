#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		int grado, punto, res=0;
		
		cout << "Introduzca el grado de su polinomio" << endl;
		cin >> grado;
		
		int pol[grado]; //Tambien podria inicializarse con un valor maximo predefinido para evitar problemas con el compilador
		
		cout << "A continuacion, introduzca los coeficientes de menor a mayor: " << endl;
		for(int i = 0; i<=grado; i++){
			cout << "--> ";
			cin >> pol[i];
		}
		
		cout << "El polinomio descrito es: ";
		for(int i = grado; i>=0; i--){
			cout << pol[i] << "x^" << i;
			if(i!=0){
				cout << " + ";
			}
		}
		
		cout << "\nIntroduzca un valor para evaluar el polinomio dado en 'x'" << endl;
		cin >> punto;
		
		for(int i = 0; i<=grado; i++){
			res += (pol[i]*(pow(punto, i)));
			//cout << "res: " << res << ", pol[i]:" << pol[i] << ", punto^i:" << (pow(punto, i)) << endl;
		}
		
		cout << "El resultado de f(" << punto << ") es: " << res;
	}