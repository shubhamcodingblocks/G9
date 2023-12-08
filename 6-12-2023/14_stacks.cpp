// STACKS ......
#include <iostream>
#include <stack>
using namespace std ;

int main() {
    stack<int> s ;
    s.push(1) ;
    s.push(2) ;
    s.push(3) ;
    s.push(4) ;
    s.push(5) ;
    // cout<<"O is the stack is not empty and 1 if it is : "<<s.empty()<<endl ; //0-> stack is not empty
    //             // 1-> stack is empty
    // s.pop() ; // -> pops top element 
    // s.top() ; // -> prints top element 
    
    while (s.empty() == 0) {
        cout<<s.top()<<endl;
        s.pop() ;
    }
    
    return 0;
}