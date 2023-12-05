#include<iostream>
#include<set>
using namespace std;

int main(){
  multiset<int> s;
  s.insert(1);
  s.insert(4);
  s.insert(2);
  s.insert(0);
  s.insert(2);
  s.insert(4);
  s.insert(1);
  // sorted order , but duplicate elements can be present
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
              // removes all the occurrences of 4
  for(auto it = s.begin(); it!=s.end(); it++){
    cout << *it << " ";
  }
  // remove only single occurrence of 2: (below)
  it = s.begin();
  for( ;it!=s.end();it++){
    if(*it == 2){
      break;
    }
  }
  s.erase(it);
  cout <<endl << "set after removing single occurence of 2 " << endl;
  for(auto elem: s){
    cout << elem << " ";
  }
  cout << endl;
  cout << "size of set " << s.size() << endl;
  cout << "is the set empty? : " << s.empty() << endl;
  cout << "Clearing the set..." << endl;
  s.clear();
  cout << "is the set empty? : " << s.empty() << endl;
  return 0;
}