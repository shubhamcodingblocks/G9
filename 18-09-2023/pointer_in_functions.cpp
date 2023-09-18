#include<iostream>
using namespace std;

void increment(int a,int b){
	a = a+1;
	b = b+1;
}

int main(){
	int a = 1,b=2;
	increment(a,b);
	cout<< a <<" "<< b <<endl;
	return 0;
}