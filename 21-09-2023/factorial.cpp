#include<iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	int chotiProblem = fact(n-1);
	int badiProblem = n*chotiProblem;
	return badiProblem;
}

int main(){
	int n = 5;
	cout<< fact(n) <<endl;
	return 0;
}