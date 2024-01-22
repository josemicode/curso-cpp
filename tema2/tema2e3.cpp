#include <iostream>

using namespace std;

	int main(){
		//Variables
		int peso;
		
		peso = 8 * sizeof(char);
		cout << "El tipo char pesa: " << peso << " bits" << endl;
		
		peso = 8 * sizeof(string);
		cout << "El tipo string pesa: " << peso << " bits" << endl;
		
		peso = 8 * sizeof(int);
		cout << "El tipo int pesa: " << peso << " bits" << endl;
		
		peso = 8 * sizeof(short);
		cout << "El tipo short pesa: " << peso << " bits" << endl;
		
		peso = 8 * sizeof(float);
		cout << "El tipo float pesa: " << peso << " bits" << endl;
	}