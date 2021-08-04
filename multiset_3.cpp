
// CPP program to demonstrate the multiset::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

    multiset<int> s; 

    // Function to insert elements 
    // in the multiset container 
    s.insert(1); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(4); 

    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 

    // when 3 is present 
    auto it = s.upper_bound(3); 
    cout << "\nThe upper bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 2 is not present 
    // points to next greater after 2 
    it = s.upper_bound(2); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 10 exceeds the max element in multiset 
    it = s.upper_bound(10); 
    cout << "The upper bound of key 10 is "; 
    cout << (*it) << endl; 

    return 0; 
} 

