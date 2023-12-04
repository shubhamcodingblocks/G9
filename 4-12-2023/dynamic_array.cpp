#include<iostream>
using namespace std;

int main(){
	int * a = new int[10];
	for(int i=0;i<10;i++){
		a[i] = i;
	}
	int * temp = new int[10];
	for(int i=0;i<10;i++){
		temp[i] = a[i];
	}
	delete[] a;
	a = new int[20];
	for(int i=0;i<10;i++){
		a[i] = temp[i];
	}
	for(int i=0;i<20;i++){
		cout << a[i] << " ";
	}
	return 0;
}
