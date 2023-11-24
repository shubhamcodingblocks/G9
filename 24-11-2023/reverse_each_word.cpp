#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  string temp = "";
  for(int i=0;i<s.length();i++){
    if(s[i]==' '){
      // processing on word start here
      reverse(temp.begin(), temp.end());
      cout << temp << " ";
      // processing on word ends here
      temp = ""; // empty the word after processing
    }
    else{
      temp += s[i];
    }
  }
  // processing last word starts here
  reverse(temp.begin(), temp.end());
  cout << temp << " ";
  // processing last word ends here
  return 0;
}
