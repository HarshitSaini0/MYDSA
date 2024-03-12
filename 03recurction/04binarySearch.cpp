// ?Binary Search: Implement a binary search algorithm using recursion.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int[], int, int, int);

int main()
{
    int arr[] = {1, 3, 5, 12, 15, 21, 23, 26, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
    cout << binarySearch(arr, 12, 0, size - 1);
    return 0;
}
int binarySearch(int arr[], int value, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == value)
        return mid;
    else if (start >= end)
        return -1;
    else if (arr[mid] > value)
        return binarySearch(arr, value, start, mid);
    else if (arr[mid] < value)
        return binarySearch(arr, value, mid + 1, end);
}