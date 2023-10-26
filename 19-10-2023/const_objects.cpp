#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	public:
	char name[100];
	int age;
	Employee(char * n,int a){
		strcpy(name,n);
		age = a;
	}
	void display1() {
		cout << name <<endl;
		cout << age <<endl;
	}
	void display() const{
		cout << name <<endl;
		cout << age <<endl;
	}
};

int main(){
	char a[100] = "abc";
	const Employee e(a,123);
	e.age = 12;
	e.display1(); // will throw an error because display 1 is non constant
	// and we need to ensure that we dont call any function which can change the values for that object
	e.display();
	return 0;
}