/* the satetment of the problem is :
    *   You have been given an array of zeros of size.
        There will be Q number of queries.
        In each query there will be two indices 'L' and 'R'.
        Increase all the values from index L to R(including).
        Print the resultant array
For Example
    array = {0,0,0,0,0,0,0,0}

    Q1 = 3, 5
    Q2 = 2, 6

    result = {0,0,1,2,2,2,1,0}

*/
/*
    * We will implement this using the vectors of STL in C++
*/

#include<iostream>
//includeing the vector header file
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    //creating a vector of type int of size n, and initialize it with 0
    vector<int> v (n, 0);
    int q, c=1;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int l, r;
        cout<<"Enter the left and right indices of "<<c<<" :";
        cin>>l>>r;
        /* for designing the markers*/
        if(l>=0 && r<n){
            v[l]++;
            v[r+1]--;
        }
        else
            cout<<"Out of range"<<endl;
        c++;
    }
    //taking the cammulative sum
    for(int i = 1; i<n; i++)
        v[i] += v[i-1];
    
    //printing the result
    cout<<"Result is :"<<endl;
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}