#include<iostream>
#include "cabecera.h"

using namespace std;

	int factorial(int n){
		int res = 1;
		for(int i = 1; i <= n; i++){
			res *= i;
		}
		return res;
	}
	
	double combinatorio(int n, int k){
		double res = (double) factorial(n)/(factorial(k)-factorial(n-k));
		return res;
	}