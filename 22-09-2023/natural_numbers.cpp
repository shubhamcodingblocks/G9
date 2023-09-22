#include<iostream>
using namespace std;

void print_numbers2(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	print_numbers2(n-1);
	cout<< n <<endl;
}

void print_numbers(int i,int n){
	// base case
	if(i==n+1){
		return;
	}

	// recursive case
	cout<< i <<endl;
	print_numbers(i+1,n);
}

int main(){
	int n = 10;
	print_numbers2(n);
	return 0;
}