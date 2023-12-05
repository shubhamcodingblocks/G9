#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_front(4);
	dq.push_front(5);
	dq.push_front(6);
	deque<int>::iterator it = dq.begin();
	auto itt = dq.begin();
	for( ;it!=dq.end();it++){
		cout << *it << " ";
	}
	dq.pop_back();
	cout << endl;
	for( ;itt!=dq.end();itt++){
		cout << *itt << " ";
	}
	dq.pop_front();
	cout << endl;
	for(auto elem: dq){
		cout << elem << " ";
	}
	cout << endl;
	cout << "size of deque is: " << dq.size() << endl;
	cout << dq.empty() << endl;
	cout << "clearing deque ... " << endl;
	//l.clear();
	cout << dq.empty() << endl;
	auto rem_it = dq.begin();
	rem_it++;
	rem_it++;
	dq.erase(rem_it);
	for(auto value:dq){
		cout << value << " ";
	}
	return 0;
}