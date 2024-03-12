// ? Write a program to check if a given array is sorted in ascending or descending order.

#include <bits/stdc++.h>
using namespace std;

bool isOrdered(vector<int>);
bool isAscending(vector<int>);
bool isDescending(vector<int>);

int main()
{

    vector <int> myArray1 ={1,3,5,12,17,21,25};
    vector <int> myArray2 ={25,24,21,19,15,12,10,5,2};
    vector <int> myArray3 ={22,45,32,55,13,103};
    cout<<isOrdered(myArray3)<<" "<<isAscending(myArray3)<<" "<<isDescending(myArray3)<<" \n";
    return 0;
}

bool isOrdered(vector<int> array)
{
    return (isAscending(array)||isDescending(array));
}
bool isAscending(vector<int> array)
{
   
    for (int i =0;i<array.size()-1;i++){
        if(array[i]>array[i+1]) return 0;
    }
    return 1;
    
}
bool isDescending(vector<int> array)
{
    for (int i =0;i<array.size()-1;i++){
        if(array[i]<array[i+1]) return 0;
    }
    return 1;
}
