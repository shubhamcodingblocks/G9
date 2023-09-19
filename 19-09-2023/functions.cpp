#include<iostream>
using namespace std;

void sub(int a,int b){
	cout<< a-b <<endl;
}

void add(int a,int b){
	sub(a,b);
	cout<< a+b <<endl;
}

int main(){
	int a = 11,b=12;
	add(a,b);
	return 0;
}