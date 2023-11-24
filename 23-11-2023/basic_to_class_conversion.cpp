#include<iostream>
using namespace std;

class A{
	int x;
public:
	A(int val){
		x = val;
	}
	void display(){
		cout << "A: " << x << endl;
	}
};

int main(){
	A a(123);
	a.display();

	return 0;
}