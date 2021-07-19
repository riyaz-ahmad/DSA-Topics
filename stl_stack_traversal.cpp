
// C++ program to illustrate Stack traversal

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creating a Stack using STL
    stack<int> s;
    
    // The push function inserts elements
    // at the top of Stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    
    // While stack is not empty
    while(!s.empty())
    {
        // Print top element
        cout<<s.top()<<" ";
        
        // Pop top element
        s.pop();
    }
    
    return 0;
}
