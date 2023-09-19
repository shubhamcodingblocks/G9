#include<iostream>
using namespace std;

void add(int a=0,int b=0,int c=0){
	cout<< a+b+c <<endl;
}

int main(){
	add(1,2);
	add();
	add(1,2,3);
	add(1);
	return 0;
}