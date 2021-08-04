
// CPP program to illustrate the  set::find() and set::count() functions 
#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std; 

int main() 
{ 
    // Initialize set 
    set<int> s; 

    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(3); 

    // iterator pointing to 
    // position where 2 is 
    auto pos = s.find(3); 
    
    if(pos != s.end())
        cout<<"Element Found.\n";
    else
        cout<<"Element not Found.\n";
        
    // prints the set elements 
    cout << "The set elements after 3 are: "; 
    for (auto it = pos; it != s.end(); it++) 
        cout << *it << " "; 
    
    // Check if 4 is present in the Set using 
    // count() function
    if(s.count(4)!=0)
        cout<<"\n4 is present";
    else
        cout<<"\n4 is not present";
        
    return 0; 
} 

