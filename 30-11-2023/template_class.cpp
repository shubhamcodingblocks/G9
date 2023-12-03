#include<iostream>
using namespace std;

template<typename T>
class A{
	int sz;
	T * arr;
public:
	A(T * a,int s){
		arr = a; // shallow copy
		sz = s;
	}
	T operator[](int idx){
		return arr[idx];
	}
};

int main(){
	string a[10];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}	
	A<string> obj(a,10);
	for(int i=0;i<10;i++){
		cout << obj[i] << " ";
	}
	return 0;
}