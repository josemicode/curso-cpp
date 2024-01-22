#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		bool cond = true;
		double nReal, medArit = 0, medGeom = 1;
		char respuesta;
		int nParametros = 0;
		
		while(cond){
			
			cout << "Quieres anadir un numero? [s/n]" << endl;
			cin >> respuesta;
			cin.ignore();
			
			if(respuesta=='s'){
				cout << "Introduzcalo: " << endl;
				cin >> nReal;
				cin.ignore();
				
				nParametros++;
				medArit += nReal;
				medGeom *= nReal;
			}else{
				cond = false;
			}
		}
		
		cout << nParametros;
		
		medArit = medArit/nParametros;
		medGeom = pow(medGeom, ((double) 1/nParametros));
		
		cout << "Media Aritmetica: " << medArit << endl;
		cout << "Media Geometrica: " << medGeom << endl;
	}