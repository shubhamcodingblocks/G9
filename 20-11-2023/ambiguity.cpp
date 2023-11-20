#include<iostream>
using namespace std;

class A{
public:
	void show(){
		cout << "method inside A" << endl;
	}
};

class B{
public:
	void show(){
		cout << "method inside B" << endl;
	}
};

class C : public A, public B{
public:
	void showC(){
		cout << "method inside C" << endl;
	}
};


int main(){
	C obj;
	obj.show();
	return 0;
}