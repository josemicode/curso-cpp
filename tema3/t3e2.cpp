#include<iostream>
#include<cmath>

using namespace std;

	int main() {
		int a;
		
		cout << "Introduce a: " << endl;
		cin >> a;
		cin.ignore();
		
		(a>=0) ? cout << sqrt(a) : cout << "a es negativa, no tiene raiz.";
	}