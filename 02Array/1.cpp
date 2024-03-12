#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 23, 11, 9, 21};
    for (int element : arr)
    {
        cout << element << " ";
    }

    cout << endl
         << endl;

    int *ptr = arr;
    while (ptr < arr + 5)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl
         << endl;

    // array<int, 5> myArray = {1, 2, 3, 4, 5};
    // cout << myArray.size() << endl;

    // vector<int> myVector = {1, 2, 3};
    // myVector.push_back(4); // Add an element
    // cout << myVector[2] << endl;

    vector<int> myVector = {1, 2, 3, 4, 5};
    for (int value : myVector)
    {
        cout << value << " ";
    }



    vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl << endl ;
    
    for_each(myVector.begin(), myVector.end(), [](int value)
                  { cout << value << " "; });

    return 0;
}