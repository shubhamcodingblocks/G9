// BASIC COMMANDS 

#include <iostream>
#include <vector>
using namespace std ;

int main() {
    int n = 3;
    vector<int> vec;
    for(int i = 0 ; i < n ; i++){
        // vec[i] = i ;   this doesn't work 
        vec.push_back(i) ;
        
    }
    for(int i = 0 ; i < n ;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<"THE CAPACITY : "<<vec.capacity()<<endl;
    cout<<"THE SIZE : "<<vec.size()<<endl ;

    return 0 ;

}