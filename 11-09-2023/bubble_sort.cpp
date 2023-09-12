#include<iostream>
using namespace std;

int main(){
	// input
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//sort
	for(int j=0;j<n-1;j++){
		for(int i=0;i<=n-2;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}

	//output
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}