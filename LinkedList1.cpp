#include<bits/stdc++.h>

using namespace std;

//structre foe creating  a node of a linked list
struct nodeType{
    //info stored the data part of a node(here tyep is int)
    int info;

    //link is the pointer  to the next node of a linked lis
    nodeType *link;
};

nodeType *first, *last, *newNode;

/*
    *function for building a linked list in a forward direction  
    *this means that we always insert new node at the end of a linked list
*/
nodeType* buildForward(){
    int num;
    cout<<"Enter the elements, -1 for exit "<<endl;
    cin>>num;
    first = NULL;
    last = NULL;

    while(num != -1){
        newNode = new nodeType;
        newNode-> info = num;
        newNode-> link = NULL;

        if(first == NULL){
            first = newNode;
            last = newNode;
        }
        else{
            last-> link = newNode;
            last = newNode;

        }
        cin>>num;
    }//while ends here
    return first;
}//forward building function ends here

nodeType* buildBackward(){
    int num;
    cin>>num;
    cout<<"Enter elements , -1 for exit "<<endl;
    first = NULL;
    while (num != -1)
    {
        newNode = new nodeType;
        newNode -> info = num;
        newNode -> link = first;

        first = newNode;

        cin>>num;
    }//while ends here;
    return first;
}//buildBackward function ends here


int main(){
    nodeType *head, *p;

   head = buildForward();
   p = head;

   cout<<"******Building Linked List Forward**********"<<endl;
   while(head != NULL){
       cout<<p->info<<" ";
       p = p-> link;
   }
   cout<<endl<<"*************************************************"<<endl;

   head = buildForward();
   p = head;

    cout<<"******Building Linked List Backward**********"<<endl;
   while(head != NULL){
       cout<<p->info<<" ";
       p = p-> link;
   }
   cout<<endl<<"*************************************************"<<endl;
    return 0;
}