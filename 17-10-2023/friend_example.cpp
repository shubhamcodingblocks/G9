#include<iostream>
using namespace std;

class Printer;

class Student{
private:
	char name[100];
	int roll_no;
public:
	friend void Printer::print_details(Student);
};


class Printer{
public:
	void print_details(Student s){
		cout<< s.name<<" "<<s.roll_no<<endl;
	}
};

int main(){
	
	return 0;
}