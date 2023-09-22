#include<iostream>
using namespace std;

int sum2(int *a,int n){
	if(n==0){
		return 0;
	}

	int cp = sum2(a+1,n-1);
	return cp + (*a);
}

int sum(int *a,int i,int n){
	// base case
	if(i==n){
		return 0;
	}

	// recursive case
	int cp = sum(a,i+1,n);
	int bp = a[i]+cp;
	return bp;
}

int main(){
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	cout<< sum2(a,n);
	return 0;
}