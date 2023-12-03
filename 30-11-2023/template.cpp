#include<iostream>
using namespace std;

template <typename T>
T func(T a, T b){
	return a+b;
}

int main(){
	string a,b;
	cin >> a >> b;
	cout << func(a,b) << endl;
}
