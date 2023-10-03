#include<iostream>
using namespace std;

int sum1(int n);

int sum2(int n){
	if(n==0){
		return 0;
	}
	return n+sum1(n-1);
}

int sum1(int n){
	if(n==0){
		return 0;
	}

	return n+sum2(n-1);
}

int main(){
	int n = 5;
	cout<< sum1(n) <<endl;
	return 0;
}