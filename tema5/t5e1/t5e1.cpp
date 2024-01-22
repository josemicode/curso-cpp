#include<iostream>
#include "cabecera.h"

#define MAX 1500

using namespace std;
	
	/*bool esBisiesto(int an);
	int bisiestosComprendidos(int an1, int an2, int ans[MAX]);*/
	
	int main(){
		int anDet, anIni, anFin, size;
		int anios[MAX];
		
		cout << "Ingrese un anio para ver si es bisiesto o no " << endl;
		cin >> anDet;
		
		if(esBisiesto(anDet)){
			cout << anDet << " es bisiesto" << endl;
		}else{
			cout << anDet << " no es bisiesto" << endl;
		}
		
		cout << "Introduce un anio inicial: " << endl;
		cin >> anIni;
		
		cout << "Introduce un anio final: " << endl;
		cin >> anFin;
		
		size = bisiestosComprendidos(anIni, anFin, anios);
		
		for(int i = 0; i < size; i++){
			cout << anios[i] << " ";
		}
	}
	
	/*bool esBisiesto(int an){
		bool res = false;
		if((an%4==0) && !((an%100==0)&&(an%400!=0))){
			res = true;
		}
		return res;
	}
	
	int bisiestosComprendidos(int an1, int an2, int ans[MAX]){
		
		int cont = 0;
		for(int i = an1; i <= an2; i++){
			if(esBisiesto(i)){
				ans[cont] = i;
				cont++;
			}
		}
		
		return cont;*/
	