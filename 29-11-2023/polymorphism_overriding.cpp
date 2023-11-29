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

int main(){
	A * aptr;
	B obj;
	aptr = &obj;
	aptr -> display();
	(*aptr).display();
	return 0;
}
