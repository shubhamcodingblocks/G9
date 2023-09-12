#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}