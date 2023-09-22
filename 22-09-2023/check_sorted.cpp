#include<iostream>
using namespace std;

bool check_sorted2(int *a,int n){
	if(n==0 or n==1){
		return true;
	}
	bool cp = check_sorted2(a+1,n-1);
	if(cp==true and a[0]<a[1]){
		return true;
	}
	else{
		return false;
	}
}

bool check_sorted(int *a,int i,int n){
	// base case
	if(i==n-1 or i==n){
		return true;
	}

	// recursive case
	bool cp = check_sorted(a,i+1,n);
	if(cp==true and a[i]<a[i+1]){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a[] = {1,4,9,11,13,19};
	int n = sizeof(a)/sizeof(int);
	if(check_sorted(a,0,n)==true){
		cout<< "array is sorted"<<endl;
	}
	else{
		cout<< "array is not sorted"<<endl;
	}
	return 0;
}