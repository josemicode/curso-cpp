#include<iostream>
#include"header.h"

using namespace std;

int main(){
	
	int a = 10;
	double b = 8.1;
	long c = 6;
	
	ejercicio3(&a, &b, c);
	
	cout << "RES: " << b;
}