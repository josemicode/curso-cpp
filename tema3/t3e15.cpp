#include<iostream>

using namespace std;

	int main(){
		int param, divisores;
		
		cout << "Introduce un numero: " << endl;
		cin >> param;
		cin.ignore();
		
		divisores = 0;
		
		for(int i = 1; i<=param; i++){
			if((param%i)==0){
				divisores++;
			}
		}
		
		if((divisores==2)){
			cout << "Es primo";
		}else{
			cout << "No primo";
		}
	}