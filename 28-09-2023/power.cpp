#include<iostream>
using namespace std;

int powerr(int x,int n){
	// base case
	if(n==0){
		return 1;
	}
	// recursive case
	return powerr(x,n-1)*x;
}

int main(){
	int n,x;
	cin>>n>>x;
	cout<< powerr(x,n)<<endl;
	return 0;
}