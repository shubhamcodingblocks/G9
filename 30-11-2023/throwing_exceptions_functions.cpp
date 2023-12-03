#include<iostream>
using namespace std;

void func3(){
	cout << "Inside function 3" << endl;
	throw "exception thrown from function 3";
}

void func2(){
	cout << "Inside function 2" << endl;
	func3();
}

void func1(){
	cout << "Inside function 1" << endl;
	func2();
}

int main(){
	try{
		func1();
		throw "no exception";
	}
	catch(const char * e){
		cout << e << endl;
	}
	return 0;
}
