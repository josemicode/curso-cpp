#include<iostream>
#include<cmath>

using namespace std;

	int main() {
		double a,b,c,res,res2,raiz;
		
		cout << "Introduzca a: " << endl;
		cin >> a;
		cin.ignore();
		
		cout << "Introduzca b: " << endl;
		cin >> b;
		cin.ignore();
		
		cout << "Introduzca c: " << endl;
		cin >> c;
		cin.ignore();
		
		if(a==0){			
			if(b==0){
				cout << "Sin solucion";
			}else{
				res = -c/b;
				cout << "Solucion: " << res;
			}
		}else{
			raiz = pow(b,2) - 4*a*c;
			if(raiz>=0){
				res = ((-b+sqrt(raiz))/(2*a));
				res2 = ((-b-sqrt(raiz))/(2*a));
				cout << "Solucion 1: " << res << endl;
				cout << "Solucion 2: " << res2 << endl;
			}else{
				res = -b/(2*a);
				res2 = sqrt(-raiz)/(2*a);
				cout << "Solucion 1: " << res << " + " << res2 << "i" << endl;
				cout << "Solucion 2: " << res << " - " << res2 << "i" << endl;
			}
		}
		
		return 0;
	}