#include<iostream>
#include<algorithm>
using namespace std;

bool is_palindrome(string word){
  string rev_word = word; // storing word into another variable
  reverse(rev_word.begin(), rev_word.end()); // reverse this word
  if(rev_word == word){
    return true;
  }
  else{
    return false;
  }
}

int main(){
	string s;
	getline(cin,s);
	string temp = "";
	int ct = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] == ' '){
			// processing word starts here
			if(is_palindrome(temp) == true){
				ct++;
			}
			// processing word ends here
			temp = ""; // making temp empty afting processing word
		}
		else{
			temp += s[i];
		}
	}
	// processing last word starts here
	if(is_palindrome(temp) == true){
		ct++;
	}
	// processing last word ends here
	cout << ct << endl;
   	return 0;
}