#include<iostream>
#include"header.h"

using namespace std;

int main(){
	
	int v1[5] = {1, 2, 0, 3, 5};
	int v2[5] = {2, 2, 4, 1, 1};
	
	int res = ejercicio5(&v1[0], &v2[0], 5);
	
	cout << "RES: " << res;
}