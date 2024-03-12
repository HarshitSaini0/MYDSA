#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int[],int);

int main()
{
    system("cls");
    int arr[] = {1, 2, 2, 5,2, 7, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << is_sorted(arr,size);
    return 0;
}
bool is_sorted(int arr[],int size)
{
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}