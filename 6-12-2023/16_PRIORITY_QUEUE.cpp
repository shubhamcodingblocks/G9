// PRIORITY QUEUE // top element always conatins the gratest ..... 

// QUESTION .....
// sort an array in descending order using priority queue ..... 
#include <iostream>
#include <queue>
using namespace std ;

int main() {
    int arr[5] = {1,2,3,4,5} ;
    priority_queue<int> q ;
    
    for(int i = 0 ; i < 5 ;i++) {
        q.push(arr[i]) ;
    }
    
    // cout<<q.top() ; // prints the topmost element 
    // cout<<endl; 
    // q.top() ;
    
    // way 1 of printing                   // max heap , max prior ;
    while(q.empty() == 0) {
        cout<<q.top()<<endl ;
        q.pop() ;
    }
    // way 2 of printing 
    for(int i =0 ; i < 5 ; i++){
        cout<<q.top()<<" " ;
        q.pop() ;
    }



    // for printing minimum to maximum : 
    priority_queue<int> , vector<int>, greater<int>> pq ;
    for(int i =0 ;i < 5 ;i++){
        pq.push(arr[i]) ;
    }
    for(int i = 0 ; i< 5 ;i++){
        arr[i] = pq.top() ;
        pq.pop() ;
    }
    for(int i = 0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}s