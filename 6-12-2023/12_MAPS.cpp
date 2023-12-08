// MAPS 
#include <iostream>
#include <map>

using namespace std ;

// map also stairs values in pairs .... int and string in below 

int main(){
    map<int,string> m ;
    m[1] = "abc" ;
    m[2] = "def" ;
    m[3] = "mno" ;
    for(auto value :m ){
        cout<<"key: "<<value.first<<" value: "<<value.second<<endl;
    }
    return 0 ;
}