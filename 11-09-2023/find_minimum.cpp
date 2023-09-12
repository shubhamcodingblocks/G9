#include<iostream>
#include<climits>
using namespace std;

int main(){
	int a[] = {1,-1,3,-100,5};
	int n = sizeof(a)/sizeof(a[0]);
	int mn = INT_MAX;
	for(int i=0;i<=n-1;i++){
		if(a[i]<mn){
			mn = a[i];
		}
	}
	cout<<"minimum element is: "<<mn<<endl;
	return 0;
}