// NORMALLY WE SEQUENTIAL CONTAINERS THAT IS WE MOVE FROM ONE BLOCK TO ANOTHER ...... used in lists, arrays , vectors etc ....
// assertative containers are used in sets , maps etc ....
// ALL THE ASSERTIATIVE CONTAINERS HAVE TIME COMPLEXITY OF log(n)       ----> THROUGH TREE .... 
#include <iostream>
#include <set>
using namespace std ; 

int main() {
    set<int> s ;
    s.insert(1) ;
    s.insert(2) ;
    s.insert(10) ;
    s.insert(2) ;
    s.insert(5);
    s.insert(-1) ;
    s.insert(6);
    // only unique elements are stored ....
    // elements stored in sorted order 
    cout<<"SIZE OF SET IS : "<<s.size()<<endl;
    // for(it = s.begin() ; it < s.end() ; i++){
    //     cout<<*it<<" ";
    // }   this will not work 
    for(auto value : s){
        cout<<value<<" ";
    }
    s.erase(2);
    set<int>::iterator it = s.begin() ;
    it++;
    it++;
    s.erase(it) ;
    cout<<endl;
    for(auto value : s){
        cout<<value<<" ";
    }
    cout<<endl<<" count of 6 is : "<<s.count(6)<<endl;
    return 0;
}





// rbegin() : to begin the loop from the right side 
// rend() : to end the loop in the left side 
// look at the class->13_class_friend question ...... 