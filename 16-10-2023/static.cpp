#include<iostream>
#include<cstring>

using namespace std;

class Student{
public:
	int roll_no;
	char name[100];
	static int ct;
	void set(int r,char *n){
		ct++;
		roll_no = r;
		strcpy(name,n);
	}
	int get_roll_no(){
		return roll_no;
	}
	char * get_name(){
		return name;
	}
	void display(){
		cout<< "roll_no : "<<roll_no<<" name: "<<name<<endl;
	}
	static void print(){
		cout<< ct <<endl;
		cout<< "static member function "<<endl;
	}
};

int Student::ct = 100;


int main(){
	// Student s1;
	// Student s2;
	// s1.set(100,"abc");
	// s2.set(101,"def");
	// s1.display();
	// s2.display();
	Student::print();
}