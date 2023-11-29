#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	try{
		if(b==0){
			throw "division by 0";
		}
		cout << "a/b: " << a/b << endl;
	}
	catch(const int e){
		cout << e << endl;
	}
	catch(const double e){
		cout << e << endl;
	}
	catch(const char * e){
		cout << e << endl;
	}
	cout << "rest of the code" << endl;
}
