#include<iostream>
using namespace std;

class A{
public:
	void feature1(){
		cout << "feature 1 acc. to A" << endl;
	}
};

class B : public A{
public:
	void feature1(){
		cout << "feature 1 acc. to B" << endl;
	}
};

int main(){
	B obj;
	obj.feature1();
	return 0;
}
