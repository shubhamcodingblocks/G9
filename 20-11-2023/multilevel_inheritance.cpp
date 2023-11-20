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

class C : public B{
public:
	void showC(){
		cout << "method inside C " << endl;
	}
};


int main(){
	C obj;
	obj.showC();
	obj.showB();
	obj.showA();
	return 0;
}