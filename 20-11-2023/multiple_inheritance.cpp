#include<iostream>
using namespace std;

class A{
public:
	void showA(){
		cout << "method inside A" << endl;
	}
};

class B{
public:
	void showB(){
		cout << "method inside B" << endl;
	}
};

class C{
public:
	void showC(){
		cout << "method iside C" << endl;
	}
};

class D : public A, public B, public C{
public:
	void showD(){
		cout << "method inside D" << endl;
	}
};

int main(){
	D obj;
	obj.showA();
	obj.showB();
	obj.showC();
	obj.showD();
	return 0;
}