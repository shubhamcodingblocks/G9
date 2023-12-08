// MAPS : unique and sorted 
#include <iostream>
#include <map>
using namespace std ;

int main() {
    // map -> {key, value }
    // map<int,string> m ;
    
    // m.insert({1,"joel"});
    // m.insert({2,"kashish"});
    // m.insert({0,"jagmeet"});
    // m.insert({0,"vansh"});
    
    // for(auto value : m) {
    //     cout<<value.first<<" "<<value.second<<endl ;
    // }
    
    // multimap
    multimap<int,string> m ;
    
    m.insert({1,"joel"});
    m.insert({2,"kashish"});
    m.insert({0,"jagmeet"});
    m.insert({0,"vansh"});
    
    for(auto value : m) {
        cout<<value.first<<" "<<value.second<<endl ;
    }
    
    
    
    // to remove a element in a multi map .... 
    // we can use iterator ..... 
    multimap<int,string>::iterator it = m.begin();
    for(; it!=m.end();it++){
        if(it->first == 0){     //if((*it).first ==2)
            break;
        }
    }
    m.erase(it);
    for(auto value:m){
        cout<<"key: "<<value.first<<"   value: "<<value.second<<endl;
    }
    return 0;
}