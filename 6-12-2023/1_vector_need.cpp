#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std ;

int main(){
    // int * a = new int[10] ;
    // for(int i = 0 ; i < 10; i++){
    //     a[i] = i ;
    // }

    // int * temp = new int[10] ;
    // for(int i = 0 ; i <10; i++){
    //     temp[i] = a[i] ;
    // }

    // delete[] a ;
    // a = new int[20] ;
    // for(int i = 0 ; i < 10 ;i++){
    //     a[i] = temp [i];
    // }
                        // here vector is printing the above code by increaing the size of the main vector .....

    vector<int> vec(5,0) ;
    vec.push_back(1) ;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5) ;
    vec.push_back(6);
    
    for(int i =0 ; i <vec.size() ;i++){
        cout<<vec[i]<<" ";
    }



    vector<string> vec_str(1,"JOEL") ;
    vec_str.push_back("Matthew kashish") ;
    for(int i = 0 ; i < vec_str.size();i++){
        cout<<vec_str[i]<<" ";
    }
    cout<<endl;
    vec_str.pop_back() ;
    for(int i = 0 ; i < vec_str.size();i++){
        cout<<vec_str[i]<<" ";
    }   
    return 0 ;
}