
// C++ program to illustrate the  Set cotainer in C++ STL

#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    // empty set container 
    /*********************************************************/
    /* Note: By default Set stores data in increasing order, */
    /*       We have used the greater function here to store */
    /*       data in decreasing order in the Set             */
    /*********************************************************/
    set <int, greater <int> > s;         

    // insert elements in random order 
    s.insert(40); 
    s.insert(30); 
    s.insert(60); 
    s.insert(20); 
    s.insert(50); 
    s.insert(50); // only one 50 will be added to the set 
    s.insert(10); 

    // Traversing set using begin() and end()
    cout << "The set s is :"; 
    for (auto itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << " " << *itr; 
    } 
    cout << endl; 

    // Traversing set using rbegin() and rend()
    //set <int, greater <int> > :: iterator itr; 
    cout << "The set s in reverse order is :"; 
    for (auto itr = s.rbegin(); itr != s.rend(); ++itr) 
    { 
        cout << " " << *itr; 
    } 
    cout << endl; 
    
    return 0; 
} 

