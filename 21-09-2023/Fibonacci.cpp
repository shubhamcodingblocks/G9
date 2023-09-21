#include<iostream>
using namespace std;

int fib(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	// recursive case
	int CP1 = fib(n-1);
	int CP2 = fib(n-2);
	int BP = CP2+CP1;
	return BP;
}

int main(){
	int n = 6;
	cout<< fib(n) <<endl;
	return 0;
}