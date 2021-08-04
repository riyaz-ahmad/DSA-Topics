
// CPP program to illustrate the erase() and count() function  in multiset

#include <iostream>
#include <algorithm>
#include <set>

using namespace std; 
int main() 
{ 
    // Create a multiset
    multiset<int> s = { 15, 10, 15, 11, 10, 18, 18, 20, 20 };  
    
    // Use count() to count number of occurrences of 15
    cout <<"15 occurs " << s.count(15) 
        << " times in container.\n"; 
        
    // Erase all occurrences of 15
    s.erase(15);
    
    // Print again count of 15
    cout <<"15 occurs " << s.count(15) 
        << " times in container.\n"; 
    
    // Erase a range using erase() function
    s.erase(s.begin(), s.end());
    
    // Print Size of multiset
    cout<<"Size of multiset: "<<s.size();

    return 0; 
} 

