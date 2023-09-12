#include<iostream>
using namespace std;

int main(){
	int a[] = {4,2,1,3};
	int i,j;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"before: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(i=1;i<n;i++){
		int pc = a[i];
		for(j=i-1;j>=0 and a[j]>pc;j--){
			a[j+1] = a[j];
		}
		a[j+1] = pc;
	}
	cout<<endl<<"after: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}