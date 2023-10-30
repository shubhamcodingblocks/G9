#include<iostream>
#include <string>
using namespace std;

string map[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printNToWords(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	printNToWords(n/10);
	int lastDigit = n%10;
	cout << map[lastDigit] << " ";
}

int main(){
	int n = 123;
	printNToWords(n);
	return 0;
}