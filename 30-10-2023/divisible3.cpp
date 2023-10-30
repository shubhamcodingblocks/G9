#include<iostream>
using namespace std;

int digitsSum(int num){
	int sum = 0;
	while(num!=0){
		int lastDigit = num % 10;
		sum += lastDigit;
		num = num/10;
	}
	return sum;
}

int main(){
	int n;
	cin >> n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += digitsSum(a[i]);
	}
	if(sum % 3 == 0){
		cout << 1 <<endl;
	}
	else{
		cout << 0 <<endl;
	}
}

