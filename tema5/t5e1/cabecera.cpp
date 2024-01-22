#include<iostream>
#include"cabecera.h"

#define MAX 1500

using namespace std;
	
	bool esBisiesto(int an){
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
		
		return cont;
	}