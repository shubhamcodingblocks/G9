// // LIST : push_back() , push_front() , back(), front() , pop_back(), pop_front() , clear(),  empty() , size() 
 // // push_front(), and pop_front() ar not in vectors .... 
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <list> 
#include <deque>


using namespace std;  // Don't forget to include the namespace

int main() {
    deque<int> l;
    l.push_back(1);
    l.push_back(1);
    l.push_back(1);
    l.push_back(1);
    l.push_front(5);
    l.push_front(6);

    // Printing through iterator
    deque<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    // Use pop_front and pop_back
    l.pop_front();  // Removes the first element (6)
    l.pop_back();   // Removes the last element (1)

    // Print the list after pop_front and pop_back
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // size 
    cout<<l.size()<<endl;

    // Use clear and empty
    l.clear();  // Removes all elements from the list


    if (l.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    return 0;
}