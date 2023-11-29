#include<iostream>
using namespace std;
// abstract class -> atleast one virtual function should be present
// we cannot create an object of abstract class (i.e, if a class has even 
// one pure virtual function)

class A{
public:
	virtual void display() = 0;
	void func(){
		cout << "function in A" << endl;
	}
};

class B : public A{
public:
	void display(){
		cout << "display in B" << endl;
	}
};

int main(){
	B obj; // will give error if we dont override display in B 
	// because now B will also contain a pure virtual function
	// and hence will be an abstract class now and hence we cannot create an 	// object of B
	obj.display();
	obj.func();
	return 0;
}
