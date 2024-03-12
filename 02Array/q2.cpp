// ??Write a program to reverse the elements of an array

#include <bits/stdc++.h>
using namespace std;

void ReverseArray(vector<int> &);
void print(vector <int>);

int main()
{
    vector<int> myArray = {12, 11, 9, 15, 23, 21, 10};
    print(myArray);
    ReverseArray(myArray);
    print(myArray);
    return 0;
}

void ReverseArray(vector<int> &arr)
{
    for (int i = 0, j = arr.size() - 1; j > i; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void print(vector <int>arr){
    for(int element : arr){
        cout<<element<<" ";
    }
    cout<<endl;
}
