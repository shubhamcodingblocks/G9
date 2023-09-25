#include<iostream>
using namespace std;

void merge(int *a,int *b,int *c,int s,int e){
	int m = (s+e)/2;
	int i = s,j=m+1;
	int k = s;
	while(i<=m and j<=e){
		if(b[i]<c[j]){
			a[k] = b[i];
			i++;
			k++;
		}
		else{
			a[k] = c[j];
			j++;
			k++;
		}
	}
	while(j<=e){
		a[k] = c[j];
		j++;
		k++;
	}
	while(i<=m){
		a[k] = b[i];
		i++;
		k++;
	}
}

void mergeSort(int* a,int s,int e){
	// base case
	if(s>=e){
		return;
	}
	// recursive case
		// divide array into 2 parts
	int m = (s+e)/2;
	int b[100],c[100];
	for(int i=s;i<=m;i++){
		b[i] = a[i];
	}
	for(int i=m+1;i<=e;i++){
		c[i] = a[i];
	}
	mergeSort(b,s,m);
	mergeSort(c,m+1,e);

	merge(a,b,c,s,e);
}

int main(){
	int a[] = {5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);
	cout<<"before: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	mergeSort(a,0,n-1);
	cout<<endl<<"after: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}