#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int x = 0;
	
	for(int i=0;i<n;i++){
		x = (x ^ a[i]);
	}

	cout << x << endl;
	return 0;
}