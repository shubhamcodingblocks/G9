// LIST : 
#include<iostream>
#include<list>

using namespace std;

int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	for(auto i: l){
		cout << i << endl;
	}

	// for(int i = 0;  i < 5 ;i++){
	// 	cout<<l[i]<<" ";
	// }
	// we cannot print it like this ..... 
	return 0;
}