#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int * aptr = &a;
	cout<< a <<endl;
	cout<< &a <<endl;
	cout<< aptr <<endl;

	float f = 11.1;
	float * fptr = &f;
	cout<< f <<endl;
	cout<< &f <<endl;
	cout<< fptr <<endl;

	cout<<"size of fptr and size of aptr are: "<<sizeof(fptr)<<" "<<sizeof(aptr)<<endl;
	return 0;
}