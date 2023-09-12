#include<iostream>
using namespace std;

int main(){
	char a[5] = {'1','2','3'};
	int size_of_array = sizeof(a);
	cout<<"size of the array is: "<<size_of_array<<endl;
	int size_of_bucket = sizeof(char);
	cout<<"size of each bucket is: "<<size_of_bucket<<endl;
	cout<<"number of buckets are: "<<size_of_array/size_of_bucket<<endl;

	int n = sizeof(a)/sizeof(int);
	cout<<"n: "<<n<<endl;
	return 0;
}