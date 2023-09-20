#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int **a = new int* [n];
	for(int i=0;i<n;i++){
		a[i] = new int [m];
	}
	int val = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j] = val++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<< a[i][j] <<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		delete[] a[i];
		a[i] = NULL;
	}
	delete[] a;
	a = NULL;
	return 0;
}