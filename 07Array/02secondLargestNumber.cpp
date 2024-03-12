#include <bits/stdc++.h>
using namespace std;

int second_largest(int[], int);

int main()
{
    system("cls");
    int arr[] = {19, 23, 12, 11 ,18, 29,24, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    // sort(arr,(arr)+size);
    // for(auto i : arr ) cout<<i<<" ";

    cout << second_largest(arr, size) << endl;
    return 0;
}
int second_largest(int arr[], int size)
{
    int largest = arr[0];
    int sec_largest = INT_MIN;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] < largest)
            sec_largest = arr[i];
    }
    return sec_largest;
}