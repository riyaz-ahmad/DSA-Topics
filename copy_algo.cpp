#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //creating an array of integers
    int intArray[] = {2, 3, 70 ,25, 50, 36, 10, 1, 5};

    //creating an empty vector of size 10
    vector <int> vectList(9);

    //creating an ostream iterator used in copy() function
    ostream_iterator<int> screen(cout, " ");

    //printing the array
    cout<<"intArray: ";
    copy(intArray, intArray+9, screen);
    cout<<endl<<endl;

    //using copy() algorithm for coying the elements of intArray into the vecList
    copy(intArray, intArray+9, vectList.begin());

    //printing the vecList
    cout<<"Veclist: ";
    copy(vectList.begin(), vectList.end(), screen);
    cout<<endl<<endl;

    //printing the veclist in reverse order
    cout<<"Reversing the vecList: ";
    copy(vectList.rbegin(), vectList.rend(), screen);
    cout<<endl<<endl;

    //checking the capacity of vecList
    cout<<"Capacity: "<<vectList.capacity();

    //checking if the veclist is empty
    if(vectList.empty()) cout<<"VectList is empty"<<endl;
    else cout<<" VectList is not empty"<<endl;

    //CHECKING THE FRONT AND BACK ELEMENTS AND push_back() function
    cout<<"Front Element: "<<vectList.front()<<endl;
    cout<<"Back Element: "<<vectList.back()<<endl;
    vectList.push_back(100);
    cout<<"After push_back() function , Back Element: "<<vectList.back()<<endl;

    //printing the vecList
    cout<<"Veclist: ";
    copy(vectList.begin(), vectList.end(), screen);
    cout<<endl<<endl;


    return 0;

}