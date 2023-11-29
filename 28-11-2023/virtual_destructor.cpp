#include<iostream>
using namespace std;

class A{
public:
	A(){
		cout << "Constructor of A called" << endl;
	}
	virtual ~A(){
		cout << "Destructor of A called" << endl;
	}
};

class B : public A{
public:
	B(){
		cout << "Constructor of B called" << endl;
	}
	~B(){
		cout << "Destructor of B called" << endl;
	}
};

int main(){
	A* aptr = new B();
	delete aptr; // deletes only A without making virtual destructor
	return 0;
}
	
