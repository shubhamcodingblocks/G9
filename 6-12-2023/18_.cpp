// COUNT IF :  
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(0);
    v.push_back(501);
    v.push_back(-100);

    // Sort the vector
    sort(v.begin(), v.end());
    for (auto value : v) {
        cout << value << " ";
    }

    // Reverse the vector
    reverse(v.begin(), v.end());
    cout << endl;
    for (auto value : v) {
        cout << value << " ";
    }

    // count if function  
    cout << endl << "NUMBER OF even numbers: " << endl;
    
    // Using lambda function as a predicate
    cout << count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }) << endl;

    return 0;
}