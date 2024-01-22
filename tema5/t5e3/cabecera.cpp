#include<iostream>
#include "cabecera.h"

using namespace std;
	
	int potencia(int b, int e){
		int res = 1;
		for(int i = 0; i < e; i++){
			res *= b;
		}
		return res;
	}