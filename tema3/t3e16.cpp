#include<iostream>

using namespace std;

	int main(){
		int param, res=0;
		double test;
		
		cout << "Introduzca un numero" << endl;
		cin >> param;
		cin.ignore();
		
		for(int i = 1; i<=param; i++){
			res += i;
		}
		
		test = (((param + 1) * param)/2);
		
		cout << "La suma de los numeros desde 1 hasta el parametro introducido es: " << res << endl;
		
		if(res==test){
			cout << "El resultado es Correcto";
		}else{
			cout << "El resultado es Erroneo, " << "lo correcto es: " << test;
		}
		
		
	}