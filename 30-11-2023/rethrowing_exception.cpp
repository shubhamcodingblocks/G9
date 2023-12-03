#include<iostream>
using namespace std;

int divide(int a,int b){
	try{
		if(b==0){
			throw "exception thrown from function: divide (divison by 0)";
		}
		return a/b;
	}
	catch(const char *e){
		throw;
	}
}

int cal_expression(int a,int b){
	try{
		return a+b-divide(a,b);
	}
	catch(const char *e){
		throw;
	}
}
	

int main(){
	int a,b;
	cin >> a >> b;
	try{
		cout << cal_expression(a,b) << endl;
	}
	catch(const char * e){
		cout << "exception caught: " << e << endl;
	}
	return 0;
}
