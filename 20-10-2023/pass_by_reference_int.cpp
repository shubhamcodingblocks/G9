#include<iostream>
using namespace std;

void change1(int a){
	a = 100;
}

void change2(int &a){
	a = 100;
}

void change3(int *a){
	*a = 200;
}

int main(){
	int a = 5;
	change1(a);
	cout<< a <<endl;
	change3(&a);
	cout<< a <<endl;
	return 0;
}