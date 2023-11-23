// order of constructor and destructor calling.
#include<iostream>
using namespace std;

class A{
public:
	A(){
		cout << "Inside constructor A" << endl;
	}
	~A(){
		cout << "Inside destructor A" << endl;
	}
};

class B : public A{
public:
	B(){
		cout << "Inside constructor of B" << endl;
	}
	~B(){
		cout << "Inside destructor of B" << endl;
	}
};

class D{
public:
	D(){
		cout << "Inside constructor of D" << endl;
	}
	~D(){
		cout << "Inside destructor of D" << endl;
	}
};

class C : public B, public D{
public:
	C(){
		cout << "Inside constructor of C" << endl;
	}
	~C(){
		cout << "Inside destructor of C" << endl;
	}
};

int main(){
	C obj;
}
