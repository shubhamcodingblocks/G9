#include<iostream>
using namespace std;

class Student{
private:
	char name[100];
	int roll_no;
public:
	Student(char *n,int r){
		strcpy(name,n);
		roll_no = r;
	}
	friend class Printer; // class declared as friend 
};


class Printer{
public:
	void print_details(Student s){
		cout<< s.name<<" "<<s.roll_no<<endl;
	}
};

int main(){
	Printer p;
	Student s("abc",123);
	p.print_details(s);
	return 0;
}