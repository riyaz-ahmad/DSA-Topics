/* 
    *This Program demonstrates the concept of list in the c++ STL
    *These are implemented as doubly linked lists in the c++ STL
    included in <list> header file
*/
#include<bits/stdc++.h>

using namespace std;

#define S                        500
#define ll                       long lon int
#define ld                       long double
#define endl                     "\n"
#define mid(l,r)                 l+(r-l)/2
#define swap(a, b)     {int temp; temp = a; a = b; b = temp;}

void printArray(int *a, int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}




int main(){
    clock_t begin = clock();
    //write your code here
    //emtpy lists l1 and l2
    list<int> l1, l2;

    //output iterator
    ostream_iterator<int> screen(cout, " ");

    //push_back() function is used to push at end 
    l1.push_back(50);
    l1.push_back(47);
    l1.push_front(12);
    l1.push_front(12);
    l1.push_front(56);
    l1.push_front(57);
    l1.push_back(32);
    l1.push_back(25);
    l1.push_front(12);
    l1.push_front(28);
    l1.push_front(12);

    //printing the elements of list using copy algorithm
    cout<<"----------------------------------------------"<<endl;
    cout<<"Printing list l1 using copy algoritm:"<<endl;
    copy(l1.begin(), l1.end(), screen);
    cout<<endl<<"----------------------------------------------"<<endl;

    // assigning the elements of l1 into l2
    l2 = l1;
    //printing list l2 using the iterator and auto keyword
    cout<<"Printing the list l2 using the auto keyword"<<endl;
    for(auto value : l2)
        cout<<value<<" ";
    cout<<endl<<endl<<"----------------------------------------------"<<endl;

    //printing the size of both lists
    cout<<"Size of l1: "<<l1.size()<<endl;
    cout<<"Size of l2: "<<l2.size()<<endl;
    cout<<endl<<endl<<"----------------------------------------------"<<endl;

    //removing the duplicate elements from l1
    cout<<"Removing the duplicate elements from the list l1"<<endl;
    l1.unique();
    for(auto value : l1)
        cout<<value<<" ";
    cout<<endl<<"-----------------------------------------------"<<endl;

    //sorting the list l2
    cout<<"Sorting the list l2"<<endl;
    l2.sort();
    for(auto value : l2)
        cout<<value<<" ";
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;

    // for popping use pop_front()
    //for removing the element use remove() function

    //front and back of l2 
    cout<<"Front of lis l2: "<<l2.front()<<endl;
    cout<<"Back of list l2: "<<l2.back()<<endl;
    cout<<"-----------------------------------------------"<<endl;

    //merging the lists
    l1.merge(l2);
    cout<<"mERGING THE LIST  l1 AND l2"<<endl;
    for(auto value : l1)
        cout<<value<<" ";
    cout<<endl<<"-----------------------------------------------"<<endl;

    //printing the size of both lists
    cout<<"Size of l1: "<<l1.size()<<endl;
    cout<<"Size of l2: "<<l2.size()<<endl;
    cout<<endl<<endl<<"----------------------------------------------"<<endl;

    //reversing the list l1
    l1.reverse();
    cout<<"Reversing the list l1"<<endl;
    for(auto value : l1)
        cout<<value<<" ";
    cout<<endl<<"-----------------------------------------------"<<endl;

    //printing the size of both lists
    cout<<"Size of l1: "<<l1.size()<<endl;
    cout<<"Size of l2: "<<l2.size()<<endl;
    cout<<endl<<endl<<"----------------------------------------------"<<endl;


    #ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;

}

