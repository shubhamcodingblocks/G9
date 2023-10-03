#include<iostream>
using namespace std;

void B(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout<<n<<endl;
	A(n-1);
}

void A(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout<<n<<endl;
	B(n-1);
}

int main(){
	int n=10;
	A(n);
	return 0;
}