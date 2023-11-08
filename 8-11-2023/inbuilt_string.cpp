#include<iostream>
using namespace std;

int main(){
	string s1 = "abcd";
	string s2 = "defgh";
	string s3 = s1 + s2;
	cout << s3 << endl;	
	if(s1<s2){
		cout << "s1 is smaller than s2 " << endl;
	}
	else{
		cout << "s2 is smaller than s1 " <<endl;
	}
	return 0;
}