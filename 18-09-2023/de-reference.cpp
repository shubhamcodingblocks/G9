#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int *aptr = &a;

	cout<<a<<endl;
	cout<< *(&a) <<endl;
	cout<< *(aptr)<<endl;
	return 0;
}