#include<iostream>

using namespace std;

	int main() {
		double notaFinal,examen,cuestionarios,actividades;
		
		cout << "Introduce la nota del examen practico: " << endl;
		cin >> examen;
		cin.ignore();
		
		cout << "Introduce la nota de los cuestionarios: " << endl;
		cin >> cuestionarios;
		cin.ignore();
		
		cout << "Introduce la nota de las actividades: " << endl;
		cin >> actividades;
		cin.ignore();
		
		if((examen>=5) || (cuestionarios>=5) || (actividades>=5)){
			notaFinal = examen*0.4 + cuestionarios*0.1 + actividades*0.5;
			if(notaFinal > 9){
				cout << "Sobresaliente";
			}else if(notaFinal > 7){
				cout << "Notable";
			}else{
				cout << "Aprobado";
			}
		}else{
			cout << "No hace media, por lo tanto esta suspenso.";
		}
	}