#include<iostream>
using namespace std;

void add(int a,int b,int c){
	cout<< a+b+c <<endl;
}

void add(int a,int b){
	cout<< a+b <<endl;
}

int main(){
	add(1,2);
	add(1,2,3);
	return 0;
}