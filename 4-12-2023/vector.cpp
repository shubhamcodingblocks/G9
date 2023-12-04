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
	vec.pop_back();
	vec.pop_back();
	cout << "is vector empty: " << vec.empty() << endl;
	vec.clear();
	cout << "is vector empty after using vec.clear(): " << vec.empty() << endl;
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << " ";
	}
	return 0;
}
