#include<iostream>
#include"header.h"

using namespace std;

void ejercicio6(float *l, int n, int p, int q){
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<p; j++){
			for(int k = 0; k<q; k++){
				cout << &(*(l+i+j+k)) << " (i =  " << i << ", j = " << j << ", k = " << k << ") "; // (l+i+j+k) --> Opción preferida, sale del enunciado
			}
		}
	}
	
	/*for(int i = 0; i<(n+p+q); i++){
		cout << &(*(l+i)); -------- &(*(l+i+j+k))
	}*/
}