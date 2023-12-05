#include<iostream>
#include<set>
using namespace std;

int main(){
  set<int> s;
  s.insert(1);
  s.insert(4);
  s.insert(2);
  s.insert(0);
  s.insert(2);
  s.insert(4);
  s.insert(1);
  // sorted order and unique elements only
  set<int>::iterator it = s.begin();
  for( ;it!=s.end();it++){
    cout << *it << " ";
  }
  cout << endl;

  it = s.begin();
  it++;
  it++;
  s.erase(it); 
  for(auto elem: s){
    cout << elem << " ";
  }
  cout << endl;
  s.erase(4); // element you want to erase (not the index)
  for(auto it = s.begin(); it!=s.end(); it++){
    cout << *it << " ";
  }

  cout << endl;
  cout << "size of set " << s.size() << endl;
  cout << "is the set empty? : " << s.empty() << endl;
  cout << "Clearing the set..." << endl;
  s.clear();
  cout << "is the set empty? : " << s.empty() << endl;
  return 0;
}