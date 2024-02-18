#include<iostream>
#include"header.h"

using namespace std;

void ejercicio4(int *v1, int *suma, double *media, int n){
	for(int i = 0; i<n; i++){
		*(suma) += *(v1 + i);
	}
	
	*(media) = (double) *(suma) / n;
}