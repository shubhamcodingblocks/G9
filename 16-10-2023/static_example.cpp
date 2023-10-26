#include<iostream>
using namespace std;

class Employee{
private:
	char name[100];
	int id;
	static int count; // assigns to 0 automtically
public:
	void set(char *n,int i){
		count++;
		id = i;
		strcpy(name,n);
	}
	char* get_name(){
		return name;
	}
	int get_id(){
		return id;
	}
	static int get_count(){
		return count;
	}
};

int Employee::count = 0; // optional to declare as 0

int main(){
	Employee e1,e2;
	e1.set("abc",123);
	e2.set("def",234);
	cout<< "employee id is : "<<e1.get_id()<<" and name is : "<<e1.get_name()<<endl;
	cout<< "employee id is : "<<e2.get_id()<<" and name is : "<<e2.get_name()<<endl;
	cout<<"count is : "<<Employee::get_count()<<endl;
	return 0;
}