/*#include<iostream>
using namespace std;

class Stackk{
    public:
    int stk[10],n,top;
    void push(int element);
    void pop();
    void display();
   // int isEmpty();
    Stackk(){
        stk[10] = {};
        n = 10;
        top = -1;
    }
};



void Stackk::push(int e){
    if(stk[top]>=n-1){
        cout<<"STACK IS FULL";
    }
    else{
        top++;
        stk[top]=e;
        cout<<e<<" Inserted Successfully!!!!!"<<endl;
    }

}

void Stackk::pop(){
    if(stk[top]<=-1)
       cout<<"Stack Underflow!!!!!"<<endl;
    else{
        cout<<stk[top]<<" popped Successfully"<<endl;
        top--;
    }
    

}
void Stackk::display(){
    if(top>=0){
        cout<<"Stack Elements Are: "<<endl;
        for(int i = top; i>=0;i--)
            cout<<stk[top]<<"  "<<i<<endl;
            cout<<endl;
    }
    else
     cout<<"Stack is Empty"<<endl;


}

int main(){
    int choice, val;
    Stackk s;
    cout<<"-----------------STACK PROGRAM USING ARRAY----------------------"<<endl;
    cout<<"==========CHOICES================="<<endl;
    cout<<"1. Display"<<endl<<"2.Push"<<endl<<"3. Pop"<<endl<<"4. Quit"<<endl;
    
    do{
        cout<<"Enter you choice"<<endl;
        cin>>choice;
        switch(choice){
          case 1:
                s.display();
                break;
        
          case 2: 
                 cout<<"Enter the element you want to push"<<endl;
                 cin>>val;
                 s.push(val);
                 break;
        
        case 3:
                s.pop();
                break;

        case 4:
              exit(0);

        default:
            cout<<"Enter the current choice"<<endl;
    }
    }while(choice != 4);
    return 0;
}
*/
#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}