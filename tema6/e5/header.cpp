#include<iostream>
#include"header.h"

using namespace std;

int ejercicio5(int *v1, int *v2, int n){
	
	int res = 0;
	
	for(int i = 0; i<n; i++){
		res += *(v1 + i) * *(v2 + i);
	}
	
	return res;
}