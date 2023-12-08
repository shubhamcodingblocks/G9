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

    for(auto &i:v){             // DEEP copy : i.t it doesn't changes it values every time  ....... '&' represents deep copy
                                // BY REFRENCE .... the main will change too 
        cout<<i<<endl;
        i++ ;
    }
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}