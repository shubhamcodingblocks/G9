#include<iostream>
using namespace std;

int main(){
	int a[] = {2,1,5,0,3};
	int n = sizeof(a)/sizeof(int);
	cout<<"before: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++){
		int min_idx = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx = j;
			}
		}
		swap(a[i],a[min_idx]);
	}
	cout<<endl<<"after: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}