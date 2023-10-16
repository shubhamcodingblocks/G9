#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	char name[100];
	int id;
public:
	Employee(char *n,int i){ // constructor
		id = i;
		strcpy(name,n);
		cout<< "constructor has been called"<<endl;
	}
	void display(){
		cout<< "name: "<<name<<" id: "<<id<<endl;
	}
};

int main(){
	char a[100] = "abc";
	Employee e1(a,123);
	e1.display();
	return 0;
}




