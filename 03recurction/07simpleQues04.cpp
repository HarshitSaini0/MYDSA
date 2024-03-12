#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - 1 - i]);
    f(i + 1, arr, n);
}

int main()
{
    system("cls");
    int arr[] = {1, 2,8, 7, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    f(0, arr, size);
    for (int element : arr)
        cout << element << " ";
    return 0;
}