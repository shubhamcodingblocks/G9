#include<iostream>
#include<cstring>
using namespace std;

class Employee{
public:
	int id;
	char name[100];
	Employee(char *n,int i){
		id = i;
		strcpy(name,n);
	}
	void display(){
		cout<<"id: "<<id<<endl;
		cout<<"name: "<<name<<endl;
	}
};

void change1(Employee e){
	e.id = 1234;
	strcpy(e.name,"abc");
}

void change2(Employee& e){ // pass by reference
	e.id = 8888;
	strcpy(e.name,"def");
}

void change3(Employee * e){ // pass by address
 	(*e).id = 200;
	strcpy((*e).name,"xyz");
}

int main(){
	Employee e("shubham",1);
	change1(e);
	e.display();
	change2(e);
	e.display();
	change3(&e);
	e.display();
	return 0;
}