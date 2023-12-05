#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_front(4);
	l.push_front(5);
	l.push_front(6);
	list<int>::iterator it = l.begin();
	auto itt = l.begin();
	for( ;it!=l.end();it++){
		cout << *it << " ";
	}
	l.pop_back();
	cout << endl;
	for( ;itt!=l.end();itt++){
		cout << *itt << " ";
	}
	l.pop_front();
	cout << endl;
	for(auto elem: l){
		cout << elem << " ";
	}
	cout << endl;
	cout << "size of list is: " << l.size() << endl;
	cout << l.empty() << endl;
	cout << "clearing list ... " << endl;
	//l.clear();
	cout << l.empty() << endl;
	auto rem_it = l.begin();
	rem_it++;
	rem_it++;
	l.erase(rem_it);
	for(auto value:l){
		cout << value << " ";
	}
	return 0;
}