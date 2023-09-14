#include<iostream>
using namespace std;

int main(){
	int a[100000],b[100000],out[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
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