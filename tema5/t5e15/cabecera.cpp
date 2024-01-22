#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	void escribirVectorCp(Complejo v[], int n){
		for(int k = 0; k < n; k++){
			cout << "\nPos "<< k <<" --> REAL: ";
			cin >> v[k].Re;
			cout << " // IMAGINARIO: ";
			cin >> v[k].Im;
		}
	}
	
	void leerVectorCp(Complejo v[], int n){
		cout << "v[";
		for(int k = 0; k < n; k++){
			cout << v[k].Re << " + (" << v[k].Im << ")i";
			if(k!=(n-1)){
				cout << ", ";
			}
		}
	}
	
	void mediaComplejos(Complejo v[], int n){
		double sumRe = 0;
		double sumIm = 0;
		
		for(int k = 0; k < n; k++){
			sumRe += v[k].Re;
			sumIm += v[k].Im;
		}
		
		double medRe = sumRe/n;
		double medIm = sumIm/n;
		
		cout << "]\n\nLa suma total es: " << sumRe << " + (" << sumIm << ")i \nLa media es: " << medRe << " + (" << medIm << ")i";
	}