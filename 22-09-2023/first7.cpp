#include<iostream>
using namespace std;

int findfirst7(int *a,int i,int n){
	// base case
	if(i==n){
		return -1; // denotes that 7 is not present in the array
	}

	// recursive case
	if(a[i]==7){ // if 7 is present at index i return that index
		return i;
	}
	return findfirst7(a,i+1,n); // ask recursion to solve from i+1 to n-1
}

int main(){
	int a[] = {1,2,7,6,7,8,9};
	int n = sizeof(a)/sizeof(int);
	cout<< findfirst7(a,0,n);
	return 0;
}