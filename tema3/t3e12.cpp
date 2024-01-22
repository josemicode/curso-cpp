#include<iostream>

using namespace std;

	int main() {
		int aux, nPares, nImpares;
		bool condicion = true;
		
		nPares = 0;
		nImpares = 0;
		
		while(condicion){
			cout << "Introduce un numero: " << endl;
			cin >> aux;
			cin.ignore();
			if(aux!=-1){
				if((aux%2)==0){
					nPares++;
				}else{
					nImpares++;
				}
			}else{
				condicion = false;
			}
		}
		
		cout << "Numero de pares: " << nPares << endl;
		cout << "Numero de Impares: " << nImpares << endl;
		
	}