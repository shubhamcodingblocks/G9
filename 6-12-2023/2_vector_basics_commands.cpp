// basic commands ....
// push_back() 
// pop_back()
// capacity()
// size()
// clear() 
// SYNTAX OF VECTOR     ........
#include <iostream>
#include <cstring>
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

    vector<int> vec(3,0);   // 3) here the current vector vec is empty and its size can be gained according to your need in main code and it DOUBLES evry time when its SIZE GETS FULL
                       // 4) vec(20,100) the 20 blocks will contain 100 and then 1 2 3 4 will get printed .... 
    vec.push_back(1) ;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    cout<<"THE CAPACITY : "<<vec.capacity()<<endl ;           // 1. it prints the current capacity 
    cout<<"THE SIZE : "<<vec.size()<<endl;
    vec.pop_back();  // 6) this will remove 4 .... 
    cout<<"THE CAPACITY : "<<vec.capacity()<<endl ;    
    cout<<"THE SIZE : "<<vec.size()<<endl;
    for(int i =0 ; i <vec.size() ;i++){       //2) vc.size prints the total size 
        cout<<vec[i]<<" ";
    }


    // 5) to print the last element of the vector 
    cout<<endl<<"TO PRINT THE LAST ELEMENT OF THE VECTOR : "<<(int)vec.back()<<endl; 

    // 8) to check if the vector is empty or not 
    cout<<"VECTOR EMPTY : "<<vec.empty()<<endl ;
    // zero if the statement is false 
    // one if the statement if true 

    //7) vector clear will clear every single element inside the vector 
    // vec.clear() ;
    
    
    
    vector<int> v ;
    v.push_back(1) ;
    v.push_back(2) ;
    v.push_back(3) ;
    cout<<endl<<endl<<"THE CAPACITY OF THE NEW VECTOR : "<<v.capacity()<<endl ;
    cout<<"THE SIZE OF THE NEW VECTOR : "<<v.size()<<endl;
    v.clear();                                  //DOUBT ....... 
    cout<<v[0]<<endl;
    
    return 0 ;
}





//8 ) H/W try to do this with string .. i.e pust string 'abc' 'def' 'ghi' and set '0' as default string ..... 
// done in previous code ......