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
  string word;
  cin >> word;
  if(is_palindrome(word) == true){
    cout << "word is a palindrome" << endl;
  }
  else{
    cout << "word is not a palindrome" << endl;
  }
  return 0;
}