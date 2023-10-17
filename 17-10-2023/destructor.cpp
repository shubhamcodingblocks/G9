#include<iostream>
using namespace std;

class Employee{
private:
	char name[100];
	int id;
public:
	Employee(){ // default constructor
		cout<<" constuctor called "<<endl;
	}
	~Employee(){ // destructor
		cout<<" destructor called "<<endl;
	}
};

int main(){
	if(true){
		Employee e;
	}
	cout<<" outside scope "<<endl;
	return 0;
}