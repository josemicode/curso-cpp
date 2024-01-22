#include<iostream>

using namespace std;

	int main(){
		int Vsize, Wsize, Wcount=0;
		bool follow = false, contains = false;
		
		cout << "V size: " << endl;
		cin >> Vsize;
		
		double V[Vsize];
		
		for(int i = 0; i < Vsize; i++){
			cout << "Vpos " << i << ": ";
			cin >> V[i];
		}
		
		cout << "W size: " << endl;
		cin >> Wsize;
		
		double W[Wsize];
		
		for(int i = 0; i < Wsize; i++){
			cout << "Wpos " << i << ": ";
			cin >> W[i];
		}
		
		for(int i = 0; i < Vsize; i++){
			if(V[i]==W[0]){
				follow = true;
			}
			if(follow && (Wcount < Wsize)){
				if(V[i] == W[Wcount]){
					Wcount++;
				}else{
					follow = false;
					Wcount = 0;
				}
			}
			
			if(Wcount == Wsize){
				contains = true;
			}
			
			//cout << "i: " << i <<" Wcount: " << Wcount << " follow: " << follow << endl;
		}
		
		if(contains){
			cout << "W is contained in V" << endl;
		}else{
			cout << "W is NOT contained in V" << endl;
		}
		
		return 0;
	}