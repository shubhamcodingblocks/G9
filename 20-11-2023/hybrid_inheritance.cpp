#include<iostream>
using namespace std;

class A{
public:
	void showA(){
		cout << "method inside A" << endl;
	}
};

class B : public A{
public:
	void showB(){
		cout << "method inside B" << endl;
	}
};

class D{
public:
	void showD(){
		cout << "method inside D" << endl;
	}
};

class C : public D, public B{
public:
	void showC(){
		cout << "method inside C" << endl;
	}
};

int main(){
	C obj;
	obj.showA();
	obj.showB();
	obj.showC();
	obj.showD();	
	return 0;
}