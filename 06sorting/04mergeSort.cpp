#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &, int, int, int);
void mergeSort(vector<int> &, int, int);

int main()
{
    system("cls");
    vector<int> arr = {4, 2, 3, 9, 10, 12, 11, 6};
    for (int i : arr)
        cout << i << " ";

    cout << "\n\n";
    mergeSort(arr, 0, arr.size() - 1);
    cout << "\n\n";
    for (int i : arr)
        cout << i << " ";

    return 0;
}
void merge(vector<int> &arr, int low, int mid, int high)
{

    vector<int> myTemp;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] >= arr[j])
        {

            myTemp.push_back(arr[j]);
            j++;
        }
        else
        {
            myTemp.push_back(arr[i]);
            i++;
        }
    }
    while (j <= high)
    {
        myTemp.push_back(arr[j]);
        j++;
    }
    while (i <= mid)
    {
        myTemp.push_back(arr[i]);
        i++;
    }

    for (int k = low; k <= high; k++)
    {
        arr[k] = myTemp[k - low];
    }
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}