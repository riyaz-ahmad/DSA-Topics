/*
    *This program illustrates the concept of heap in c++ stl 
    *by deafult it is max heap
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"STL's max heap"<<endl;
    priority_queue<int> pq;
    pq.push(50);
    pq.push(10);
    pq.push(20);
    pq.push(70);
    pq.push(90);
    pq.push(10);
    pq.push(20);
    pq.push(30);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl<<endl;
    cout<<"Min heap in STL"<<endl;
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(50);
    p.push(10);
    p.push(20);
    p.push(70);
    p.push(90);
    p.push(10);
    p.push(20);
    p.push(30);

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}