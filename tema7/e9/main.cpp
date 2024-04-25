#include<iostream>

using namespace std;

int main(){
	int *p1 = new int;
	*p1 = 10;
	delete p1;
}