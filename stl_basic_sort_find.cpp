
#include <algorithm>
#include <iostream>
using namespace std;

// Drivers Method
int main()
{
    // Sample array
    int arr[] = { 10, 15, 8, 20 };

    // Calling STL sort() function
    // to sort the array
    // arr points to the beginning of
    // the array and arr+4 points to
    // the element beyond the last
    // element of the array
    sort(arr, arr + 4);

    // for loop to traverse through
    // and print the array
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Performing binary binary_search
    // look for the element 8 in the
    // array
    if (binary_search(arr, arr + 4, 8))
        cout << "Present";
    else
        cout << "Not Present";
    return 0;
}
