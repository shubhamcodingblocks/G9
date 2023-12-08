// QUEUE // it contains front() funtion instead of top() ; FIRST IN FIRST OUT PRINCILE .... 


// these are derived containers both stack and queue and inn sab mae dublictates wala scene nahi hota ....
#include <iostream>
#include <queue>
using namespace std ;

int main() {
    queue<int> q ;
    q.push(1) ;
    q.push(2) ;
    q.push(3) ;
    q.push(4) ;
    q.push(5) ;
    while(q.empty() == 0) {
        cout<< q.front() << " " ;
        q.pop() ;
    }
    return 0;
}