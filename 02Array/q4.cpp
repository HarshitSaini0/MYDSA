// ? Write a program to insert an element at a specific position in an array.
// ?Write a program to delete an element from a given position in an array.

#include <bits/stdc++.h>
using namespace std;

void addElement(int, int, vector<int> &);
void delElement(int, vector<int> &);
void print(vector<int>);

int main()
{
    vector<int> myArray = {12, 3, 4, 24, 13, 22};
    print(myArray);
    addElement(100, 6, myArray);
    print(myArray);
    delElement( 6, myArray);
    print(myArray);
    return 0;
}

void addElement(int value, int pos, vector<int> &arr)
{
    if (pos > arr.size())
        return;
    arr.push_back(arr[arr.size() - 1]);
    for (int i = arr.size() - 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
}
void delElement(int pos, vector<int> &arr)
{
    if (pos >= arr.size())
        return;
    else if (pos == arr.size() - 1)
    {
        arr.pop_back();
        return;
    }
    else
    {
        for (int i = pos; i < arr.size() - 1; i++)
        {
            arr[i] = arr[1 + i];
        }
        arr.pop_back();
        return;
    }
}

void print(vector<int> arr)
{
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}
