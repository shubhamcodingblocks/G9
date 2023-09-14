#include<iostream>
using namespace std;

int main(){
	char ch = 'A';
	char * chptr = &ch;

	cout<<ch<<endl;
	cout<< &ch <<endl;
	cout<< chptr <<endl;

	cout<<(void *) chptr <<endl;
	return 0;
}