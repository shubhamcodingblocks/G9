#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;

int main() {
    vector<int> v ;
    v.push_back(1) ;
    v.push_back(10) ;
    v.push_back(0) ;
    v.push_back(501) ;
    v.push_back(-100) ;

    sort(v.begin,v.end());
    for(auto value : v) {
        cout<<value <<" ";
    }

    // count function 


    reverse(v.begin(), v.end()) ;
    for(auto value : v) {
        cout<<value <<" ";
    }
    return 0 ;
}