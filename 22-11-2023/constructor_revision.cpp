#include<iostream>
using namespace std;

class A{
	int a;
public:
	A(){
		cout << "Inside constrctor of A" << endl;
	}
};

class B{
	int b;
public:
	B(){
		cout << "Inside constructor of B" << endl;
	}
};

int main(){
	B obj;	
	return 0;
}