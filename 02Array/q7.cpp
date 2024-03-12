// ? Write a program to implement linear search to find a specific element in an array.
// ? Write a program to implement binary search to find a specific element in a sorted array.

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int, vector<int>);
int binarySearch(int, vector<int>);

int main()
{
    vector<int> myArray = {10, 12, 15, 20, 21, 25, 30, 35};
    cout << binarySearch(12, myArray) << " \n"; // array is sorted
    cout << linearSearch(12, myArray) << " \n";
    return 0;
}

int linearSearch(int element, vector<int> array)
{

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == element)
            return i;
    }
    return -1;
}
int binarySearch(int element, vector<int> array)
{
    int start, mid, end;
    start = 0;
    end = array.size() - 1;
    mid = (start + end) / 2;
    while (mid <= end && mid >= start)
    {
        if (array[mid] == element)
            return mid;
        else if (array[mid] > element)
        {
            {
                end = mid;
                mid = (mid + start) / 2;
            }
        }
        else if (array[mid] < element)
        {
            start = mid + 1;
            mid = (mid + end) / 2;
        }
    }
    return -1;
}
