#include<iostream>
using namespace std;

void reverse_print(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout << n <<endl;
	reverse_print(n-1);
}

int main(){
	int n = 10;
	reverse_print(n);
	return 0;
}