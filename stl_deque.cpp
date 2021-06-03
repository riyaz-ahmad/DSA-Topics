#include<bits/stdc++.h>

using namespace std;

int main(){

    deque<int> dq;

    /*
        *This is another version of for loop
        *it is called as range for loop
        *auto keyword is also used here which automatically recognises the type 
    */
        for(auto value: dq)
        cout<<value<<" ";
        cout<<endl;

        dq.push_front(10);
        dq.push_back(20);
        
        cout<<"After push_front() and push_back() operations"<<endl;
        for(auto value: dq)
        cout<<value<<" ";
        cout<<endl;
        cout<<"Size: "<<dq.size()<<endl;


        dq.push_front(30);
        dq.push_front(40);
        dq.push_front(50);
        dq.push_front(60);
        dq.push_front(70);
        dq.push_front(80);
        dq.push_front(100);
        dq.push_front(120);
        dq.push_front(150);
        dq.push_front(160);
        cout<<"After inserting more elements: "<<endl;
        for(auto value: dq)
        cout<<value<<" ";
        cout<<endl;


        cout<<"pop_front() and pop_back(): "<<endl;
        cout<<"Size before: "<<dq.size()<<endl;
        dq.pop_back();
        dq.pop_front();
        cout<<"Size After: "<<dq.size()<<endl;
        for(auto value: dq)
        cout<<value<<" ";
        cout<<endl;

        cout<<"Element at front: "<<dq.front()<<endl;
        cout<<"Element at back: "<<dq.back()<<endl;

        cout<<"Element at 7th index "<<dq.at(7)<<endl;

    return 0;
}