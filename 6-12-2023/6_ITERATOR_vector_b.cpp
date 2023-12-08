#include <iostream>
#include <vector>
using namespace std ;

int main() {
    vector<int> v ;
    v.push_back(1) ;
    v.push_back(2);
    v.push_back(3) ;
    v.push_back(4);
    v.push_back(5) ;
    // auto it = v.begin() ; 
    // vector<int>::iterator it;
    for(auto i:v){             // auto detects the type of coped v itself 
                               // SHALLOW COPY ..... 
        cout<<i<<endl;
        i++ ;
    }
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}