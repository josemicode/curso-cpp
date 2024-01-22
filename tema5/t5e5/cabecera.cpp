#include<iostream>
#include "cabecera.h"

using namespace std;
	
	bool esPerfecto(int n){
		
		bool res;
		int aux = 0;
		
		for(int i = 1; i < n; i++){
			if(n%i==0){
				aux+=i;
			}
		}
		
		if(aux == n){
			res = true;
			//cout << "aux" << aux;
		}else{
			res = false;
		}
		
		return res;
	}