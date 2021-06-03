#include<iostream>
using namespace std;
#define SIZE 15
class Que{
    public:
    int head;
    int q[size];
    void display();
    void enqueue(int e);
    void dequeue();
    Que(){
        head = -1;
    }
};

void Que::display(){



}

void Que::enqueue(){




}

void Que::dequeue(){



}

int main(){
    int val, choice;
    Que Q;
    cout<<"======================Queue using Array========================"<<endl;
    cout<<endl<<"----------------------------------------------------------"<<endl;
    cout<<"Choose the one operation: "<<endl;
    cout<<"1. Display/n2.Enqueue/n3.Dequeue/n4.Quit"<<endl;
    do
    {
        cout<<"Enter your choice ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            Q.display();
            break;
        case 2:
            cout<<"Enter the element you want to insert"<<endl;
            cin>>val;
            Q.enqueue(val);
            break;
        case 3:
            Q.dequeue();
            break;
        case 4:
            exit();
            break;
        default:
            cout<<"Plz choose right option"<<endl;
            break;
        }
        
    } while (/* condition */);
    



    return 0;
}