#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

	int main(){
		bool cond;
		char seguir, color;
		int fichas, apuesta, nConcreto, premio, saldo=0;
		
		srand(time(0));
		
		do{
			cout << "Tienes " << saldo << " fichas." << endl << "Cuantas fichas quieres comprar? " << endl;
			cin >> fichas;
			cin.ignore();
			
			saldo += fichas;
			
			cout << "Cuantas quieres apostar? " << endl;
			cin >> apuesta;
			cin.ignore();
			
			if(!((saldo-apuesta)<0)){
				saldo -= apuesta;
			}else{
				cout << "No se ha podido realizar la apuesta" << endl;
				return 0;
			}
			
			cout << "Quieres tirar al rojo, negro o a un numero en concreto? [r/n/c] " << endl;
			cin >> color;
			cin.ignore();
			
			premio = rand()%33;
			
			//cout << "Sale el " << premio << endl;
			
			switch(color){
				case 'r':
					if((premio%2)==0){
						saldo += (apuesta * 2);
						cout << "Premio en el Rojo! " << endl;
					}else{
						cout << "No ha habido suerte..." << endl;
					}
					break;
					
				case 'n':
					if((premio%2)!=0){
						saldo += (apuesta * 2);
						cout << "Premio en el Negro! " << endl;
					}else{
						cout << "No ha habido suerte..." << endl;
					}
					break;
					
				case 'c':
					cout << "Introduce un numero entre el 0 y el 32: " << endl;
					cin >> nConcreto;
					cin.ignore();
					
					cout << "Sale el " << premio << endl;
					
					if(nConcreto==premio){
						saldo += (apuesta * 32);
						cout << "Premio en el " << nConcreto << "!!" << endl;
					}else{
						cout << "No ha habido suerte..." << endl;
					}
					
					break;
			}
			
			cout << "Otra ronda? [s/n]" << endl;
			cin >> seguir;
			cin.ignore();
			
			if(seguir=='s'){
				cond = true;
			}else{
				cond = false;
			}
		}while(cond);
		
		cout << "Tu cuenta total es " << saldo << " fichas.";
		
		return 0;
	}
	
	/*do(
			cout << "Una ronda? " << endl;
			cin >> seguir;
			cin.ignore();
			
			if(){
				switch(){
					
				}	
			}else{
				cond = false;
			}
		)while(cond);*/