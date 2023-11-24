#include<iostream>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	string temp = "";
	string longest = "";
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			if(temp.size()>longest.size()){
				longest = temp;
			}
			temp = "";
		}
		else{
			temp += s[i];
		}
	}
	if(temp.size() > longest.size())
	{
		longest = temp;
	}
	cout << "longest string : " << longest << endl;
	return 0;
}
