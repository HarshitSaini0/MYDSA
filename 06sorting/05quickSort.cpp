#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int> &, int, int);
int f(vector<int> &, int, int);

int main()
{
    system("cls");
    vector<int> arr = {10, 4, 1, 5, 7, 9, 12};
    for (int i : arr)
        cout << i << " ";
    cout << "\n";
    quick_sort(arr, 0, arr.size()-1);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p_index = f(arr, low, high);
        quick_sort(arr, low, p_index - 1);
        quick_sort(arr, p_index + 1, high);
    }
}
int f(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high-1)
            i++;

        while (arr[j] > pivot && j >= 1+ low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
        cout<<pivot<<"\n";
    }
    swap(arr[low], arr[j]);
    return j;
}