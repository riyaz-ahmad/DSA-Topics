#include<bits/stdc++.h>
//#include<iostream.h>
using namespace std;

//creating a node
class Node{
    public:
    int value;
    Node * head;
    Node * next;

    Node(){
        head = NULL;
    }

    void insert(int val);
};
void Node::insert(int val){
    Node * n_node = new Node;
    n_node->value = val;
    n_node->next = NULL;

    if(head == NULL){
        head = n_node;
    }
    else{
        n_node->next = head;
        head = n_node;
    }
}

int main(){
    Node * head;
    
    Node * one = NULL;
    Node * two = NULL;
    Node * three = NULL;

    //allocate three nodes in heap
    one = new Node();
    two = new Node();
    three = new Node();

    //Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;
    
    //connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    /*print linked list value*/
    head = one;
    while (head != NULL){
        cout<<head->value<<"->";
        head = head->next;
    }

    /*inserting at head*/
    Node n;
    n.insert(5);
    /*print linked list value*/
    head = one;
    while (head != NULL){
        cout<<head->value<<"->";
        head = head->next;
    }

}