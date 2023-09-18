#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int *aptr = &a;
	cout<<"value of a: "<< a <<endl;
	cout<<"address of a: "<< aptr <<endl;
	cout<<"address of aptr "<< &aptr <<endl;
	int ** ptrtoaptr = & aptr;
	cout<< *(ptrtoaptr) <<endl;
	cout<< *(*(ptrtoaptr)) <<endl;
	cout<< *(*(&ptrtoaptr)) <<endl;
	return 0;
}