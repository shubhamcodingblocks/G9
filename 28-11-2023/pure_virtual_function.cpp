#include<iostream>
using namespace std;

class A{
public:
	// syntax : virtual return_type function_name(<parameters>) = 0;
	virtual void display() = 0; // needs to be overridden
};

class B: public A{
public:
	void display(){
		cout << "display in B" << endl;
	}
};

int main(){
	B obj;
	obj.display();
	return 0;
}
