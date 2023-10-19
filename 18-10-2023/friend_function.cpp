#include<iostream>
using namespace std;

class Second; // forward declaration

class First{
	int val;
public:
	First(int v){
		val = v;
	}
	friend void addClasses(First,Second);
};

class Second{
	int data;
public:
	Second(int d){
		data = d;
	}
	friend void addClasses(First,Second);
};

void addClasses(First f,Second s){
	cout<<"val + data = "<<f.val+s.data<<endl;
}


int main(){
	First f(5);
	Second s(4);
	addClasses(f,s);
	return 0;
}