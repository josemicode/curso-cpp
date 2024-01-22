#include<iostream>

using namespace std;

	int main() {
		int a,b;
		
		cout << "Introduce a: " << endl;
		cin >> a;
		cin.ignore();
		
		cout << "Introduce b: " << endl;
		cin >> b;
		cin.ignore();
		
		(a>b) ? cout << "a es mayor que b" : cout << "b es mayor que a";
	}