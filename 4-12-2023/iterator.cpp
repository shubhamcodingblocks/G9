#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> vec(5,-1);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	
	vector<int>::iterator it;
	auto it1 = vec.begin();
	for(it=vec.begin();it!=vec.end();it++){
		cout << *it << endl;
	}
	cout << endl;
	for(;it1!=vec.end();it1++){
		cout << *it1 << endl;
	}
	return 0;
}
