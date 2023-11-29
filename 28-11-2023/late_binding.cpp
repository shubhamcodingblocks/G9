// late binding using virtual functions
#include<iostream>
using namespace std;

class A{
public:
	virtual void display(){
		cout << "display in A" << endl;
	}
};

class B : public A{
public:
	void display(){
		cout << "display in B" << endl;
	}
};

class C : public B{
public:
	void display(){
		cout << "display in C" << endl;
	}
};

int main(){
	A * aptr;
	C obj;
	aptr = &obj;
	(*aptr).display();
	aptr -> display();
	return 0;
}
