// ITERATOR ..... works like pointer ... 
// vec.begin() prints the address of the 0 index .... 
// vec.end() will print the address of n index i.e (last_index + 1) i.e (ending_index+1) ;
// for example : look at the code below .....
 
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	vector<int>::iterator it;
	
	// way 1 of printing .... 
	for(it=vec.begin();it!=vec.end();it++){
		//cout << *it << " ";
		if(){
			break ;
		}
	}

	
	cout << endl;
	
	// way 2 of printing ..... 
    auto it1 = vec.begin();
	for(;it1!=vec.end();it1++){
		cout << *it1 << " ";
	}
	return 0;
}