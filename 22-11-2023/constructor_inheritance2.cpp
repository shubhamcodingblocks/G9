#include<iostream>
using namespace std;

class A{
public:
	A(){
		cout << "Inside default constructor of A" << endl;
	}
	A(int x){
		cout << "Inside parameterised constructor of A" << endl;
	}
};

class B{
public:
	B(){
		cout << "Inside default constructor of B" << endl;
	}
	B(int x,int y){
		cout << "Inside parameterised constructor of B" << endl;
	}
};

class C : public A, public B{
public:
	C(): B(1,2){
		cout << "Inside default constructor of C" << endl;
	}
};

int main(){
	C obj;
}
