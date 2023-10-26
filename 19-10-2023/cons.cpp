#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	char name[100];
	int age;
public:
	Employee(char * n,int a){
		strcpy(name,n);
		age = a;
	}	
	void display() const{
		// age = 23;  // not allowed to change the values as this function only have read only access
		cout<< name <<endl;
		cout<< age <<endl;
	}
};

int main(){
	char a[100] = "abc";
	Employee e(a,123);
	e.display();
	return 0;
}