#include<iostream>
#include "cabecera.h"

using namespace std;

	bool esPrimo(int num){
		bool res;
		int cont = 0;
		for(int i = 1; i <= num; i++){
			if(num%i==0){
				cont++;
			}
		}
		
		if(cont>2){
			res = false;
		}else{
			res = true;
		}
		
		return res;
	}