#include<iostream>

using namespace std;

	int main() {
		int param,res;
		bool cond = true;
		
		cout << "Introduce un numero: " << endl;
		cin >> param;
		cin.ignore();
		
		res = 1;
		
		while(cond){
			res *= param%10;
			param = param/10;
			
			if(param==0){
				cond = false;
			}
		}
		
		cout << "El resultado es: " << res;
	}