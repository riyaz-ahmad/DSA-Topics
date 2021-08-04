
// CPP program to demonstrate the multiset::equal_range() function 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    multiset<int> s; 

    // Inserts elements 
    s.insert(1); 
    s.insert(6); 
    s.insert(2); 
    s.insert(5); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(3); 

    // prints the multiset elements 
    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 

    // Function returns lower bound and upper bound 
    auto it = s.equal_range(3); 
    cout << "\nThe lower bound of 3 is " << *it.first; 
    cout << "\nThe upper bound of 3 is " << *it.second; 

    // Function returns the last element 
    it = s.equal_range(10); 
    cout << "\nThe lower bound of 10 is " << *it.first; 
    cout << "\nThe upper bound of 10 is " << *it.second; 

    // Function returns the range where the 
    // element greater than 0 lies 
    it = s.equal_range(0); 
    cout << "\nThe lower bound of 0 is " << *it.first; 
    cout << "\nThe upper bound of 0 is " << *it.second; 

    return 0; 
} 

