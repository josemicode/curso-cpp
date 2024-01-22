#include<iostream>

using namespace std;

	int main() {
		int ano;
		
		cout << "Introduce un ano: " << endl;
		cin >> ano;
		cin.ignore();
		
		if(!((ano%100==0) && !(ano%400==0)) && (ano%4==0)){
			cout << ano << " es bisiesto";
		}else {
			cout << ano << " no es bisiesto";
		}
	}