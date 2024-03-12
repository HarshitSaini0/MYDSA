#include <bits/stdc++.h>
using namespace std;

void brute_sol();
void optimal_sol();
int main()
{
    // Online C++ compiler to run C++ program online

    // Write C++ code here
    vector<int> nums = {1, 1, 2};
    vector<int> arr;
    int i = 0;
    int j = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if (arr.back() != nums[i] || arr.size() == 0)
        {
            arr.push_back(nums[i]);
            j++;
        }
    }

    cout << j << endl;

    return 0;
}

void brute_sol()
{

    vector<int> arr = {1, 1, 1, 2, 2, 2, 1, 2, 4, 3, 3, 3, 4};
    set<int> array_set;
    int new_array_size = 0;
    int arr_size = arr.size();
    for (int i = 0; i < arr_size; i++)
    {
        if (!(array_set.count(arr[i])))
        {
            array_set.insert(arr[i]);
            new_array_size++;
        }
    }
    int i = 0;
    for (auto it : array_set)
    {
        arr[i++] = it;
    }
    for (int it : arr)
        cout << it << " ";
}

void optimal_sol()
{

    vector<int> arr = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4};
    int new_array_size = 0;
    int i = 0;
    int j = 1;
    while (j < arr.size())
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
        j++;
    }
    i = 0;
    for (int it : arr)
        cout << it << " ";
}