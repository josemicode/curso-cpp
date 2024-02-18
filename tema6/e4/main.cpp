#include<iostream>
#include"header.h"

using namespace std;

int main(){
	
	int v[5] = {1, 2, 0, 3, 5};
	int suma = 0;
	double media = 0;
	int n = 5;
	
	ejercicio4(&v[0], &suma, &media, n);
	
	cout << "suma: " << suma;
	cout << "media: " << media;
}