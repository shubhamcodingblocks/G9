#include<iostream>
using namespace std;

void gen(string s,int n,int open,int close){
	if(s.length()==2*n){
		cout<< s <<endl;
		return;
	}
	if(close<open){
		gen(s+')',n,open,close+1);
	}
	if(open<n){
		gen(s+'(',n,open+1,close);
	}
}

int main(){
	gen("",3,0,0);
	return 0;
}