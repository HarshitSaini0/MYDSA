#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int arr[] = {3, 1, 6, 8, 1, 11, 0};

    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if(largest<arr[i])
            largest = arr[i];
        
    }


    cout<<"Largest number is : "<<largest ;


    cout<<"\n";
    sort(arr,arr+size);
    for(auto i : arr) cout<<i<<" ";
    return 0;
}