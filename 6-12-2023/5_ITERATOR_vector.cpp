// ITERATOR ..... works like pointer ... 
// vec.begin() prints the address of the 0 index .... 
// vec.end() will print the address of n index i.e (last_index + 1) i.e (ending_index+1) ;
// for example : look at the code below .....
 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    vector<int>::iterator it = v.begin();

    // Print the first value using iterator
    cout << "FIRST VALUE : " << *it << endl;

    // Move the iterator to the third element
    it = v.begin() + 2;

    // Print the third value using iterator
    cout << "THIRD VALUE : " << *it << endl;

    // Print the last value using iterator
    cout << "LAST VALUE : " << *(v.end() - 1) << endl;

    return 0;
}