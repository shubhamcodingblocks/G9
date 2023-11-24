#include<iostream>

using namespace std;

int main(){
  string s;
  getline(cin,s);
  string temp = "";
  string longest = "";
  for(int i=0;i<s.length();i++){
    if(s[i]==' '){
      // processing on word start here
      if(temp.size()>longest.size()){
        longest = temp;
      }
      // processing on word ends here
      temp = ""; // empty the word after processing
    }
    else{
      temp += s[i];
    }
  }
  // processing last word starts here
  if(temp.size() > longest.size())
  {
    longest = temp;
  }
  // processing last word ends here
  cout << "longest word : " << longest << endl;
  return 0;
}
