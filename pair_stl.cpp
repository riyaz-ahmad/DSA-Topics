#include<bits/stdc++.h>
using namespace std;

void Sort_pair(int a[], int b[], int n){

    //array of pairs
    pair<int, char> p[n];

    for(int i=0; i<n;i++){
       p[i].first = a[i];
       p[i].second = b[i];
    }

       //SORT ACCORDING TO FIRST ELEMENT
       sort(p, p+n);
       //&p->first element + siz
       for(int i=0; i<n;i++){
           b[i] = p[i].second;
       }

      for(int i=0; i<n;i++){
         cout<<p[i].first<<" "
             <<p[i].second<<endl;
    }

}

int main(){
    int a[] = {2,1,5,4};
    int b[] = {'A','B','D','Z'};
    int n = sizeof(a)/sizeof(a[0]);
    Sort_pair(a,b,n);
    return 0;
}