#include<iostream>

using namespace std;

	int main() {
		int dia;
		
		cout << "Introduzca el numero de un dia de la semana" << endl;
		cin >> dia;
		cin.ignore();
		
		/*switch(dia){
			case 1:
				cout << "Tu dia es un Lunes";
				break;
			case 2:
				cout << "Tu dia es un Martes";
				break;
			case 3:
				cout << "Tu dia es un Miercoles";
				break;
			case 4:
				cout << "Tu dia es un Jueves";
				break;
			case 5:
				cout << "Tu dia es un Viernes";
				break;
			case 6:
				cout << "Tu dia es un Sabado";
				break;
			case 7:
				cout << "Tu dia es un Domingo";
				break;
			default:
				cout << "Me parece que ese dia no existe";
		}*/
		
		if((dia > 0) && (dia <= 7)){
			if(dia == 1){
				cout << "Tu dia es un Lunes";
			}
			if(dia == 2){
				cout << "Tu dia es un Martes";
			}
			if(dia == 3){
				cout << "Tu dia es un Miercoles";
			}
			if(dia == 4){
				cout << "Tu dia es un Jueves";
			}
			if(dia == 5){
				cout << "Tu dia es un Viernes";
			}
			if(dia == 6){
				cout << "Tu dia es un Sabado";
			}
			if(dia == 7){
				cout << "Tu dia es un Domingo";
			}
		}else{
			cout << "Me parece que ese dia no existe";
		}
	}