#include<iostream>

using namespace std;

	int main() {
		int param, nDivisores = 0;
		
		cout << "Introduce un numero: " << endl;
		cin >> param;
		cin.ignore();
		
		for(int i = 1; i<param; i++){
			if((param%i)==0){
				nDivisores+=i;
			}
		}
		
		if(param==nDivisores){
			cout << "Numero Perfecto!";
		}else{
			cout << "Numero Comun...";
		}
	}