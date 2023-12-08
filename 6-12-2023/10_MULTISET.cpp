// MULTI-SET : multi set can contain dublicate values while set can only contain single values ....

#include <iostream>
#include <set>

using namespace std ;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(100);
    ms.insert(3);
    ms.insert(4);
    ms.insert(2);
    ms.insert(100);
    ms.insert(3);    
    for(auto value : ms){
        cout<<value<<" ";
    }
    
    
    // ms.erase(3) will remove every 3 in this multiset ....
    cout<<endl;
    // ms.erase(3) ;
    // for(auto value : ms){
    //     cout<<value<<" ";
    // }
    
    
    // now i want only one 3 to be removed terefore 
    multiset<int>::iterator it = ms.begin() ;
    for(;it!=ms.end();it++){ // 1) there in these case index does not work therefore we have to locate its address or we can say position(index) with the help of iterator 
        if(*it==3){
            break ;
        }
    }
    ms.erase(it) ;          // 2) now we have removed that '3' with the help of single iterator .....
    for(auto value : ms){
        cout<<value<<" ";                         
    }
    
    
    
    // size 
    // clear 
    return 0;
}
