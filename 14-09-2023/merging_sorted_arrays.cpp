#include<iostream>
using namespace std;

int main(){
	int a[] = {1,3,5,9,10};
	int n = sizeof(a)/sizeof(int);
	int b[] = {4,7,9,11,13,17};
	int m = sizeof(a)/sizeof(int);
	int out[100];
	int i=0,j=0,k=0;
	while(i<n and j<m){
		if(a[i]>b[j]){
			out[k] = b[j];
			k++;
			j++;
		}
		else{
			out[k] = a[i];
			i++;
			k++;
		}
	}	
	while(j<m){
		out[k] = b[j];
		j++;
		k++;
	}
	while(i<n){
		out[k] = a[i];
		i++;
		k++;
	}
	for(int i=0;i<n+m;i++){
		cout<<out[i]<<" ";
	}
	return 0;
}