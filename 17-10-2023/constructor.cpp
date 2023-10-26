#include<iostream>
using namespace std;

class Employee{
private:
	char name[100];
	int id;
	int age;
	static int ct;
public:
	Employee(char *n,int i,int a){
		ct++;
		strcpy(name,n);
		id = i;
		age = a;
	}
	int get_age(){
		return age;
	}
	int get_id(){
		return id;
	}
	char * get_name(){
		return name;
	}
	static int get_count(){
		return ct;
	}
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id <<endl;
		cout<< "age: " << age <<endl;
		cout<<endl;
	}
};

int Employee::ct;

int main(){
	cout<<Employee::get_count() <<endl; // can be accessed without creating object
	Employee e1("abc",123,24);
	Employee e2("def",234,34);
	Employee e3("ghi",456,95);
	e1.display();
	e2.display();
	e3.display();
	return 0;
}