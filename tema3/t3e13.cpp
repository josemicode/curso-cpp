#include<iostream>

using namespace std;

	int main() {
		int a,b,res;
		res = 0;
		
		cout << "Introduce a: " << endl;
		cin >> a;
		cin.ignore();
		
		cout << "Introduce b: " << endl;
		cin >> b;
		cin.ignore();
		
		for(int i = 1; i<=b; i++){
			res+=a;
		}
		
		cout << "Resultado de a * b: " << res << endl;
	}