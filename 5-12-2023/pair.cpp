#include<iostream>
using namespace std;

int main(){
  pair<int,string> p;
  p.first = 10;
  p.second = "abc";
  cout << p.first << " " << p.second << endl;

  // second way using make_pair
  pair<int,string> p1 = make_pair(1, "abc");
  cout << p1.first << " " << p1.second << endl; 
  return 0;
}