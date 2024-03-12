#include <bits/stdc++.h>
using namespace std;

void sort_array(vector<int> &);
int main()
{
    vector<int> arr = {1, 0, 1, 1, 1, 0, 1, 2, 2, 2, 0, 1, 0, 1, 2, 2, 1, 0, 1};
    sort_array(arr);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
void sort_array(vector<int> &a)
{
    int low = 0;
    int mid = 0;
    int high = a.size() - 1;
 
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[mid], a[low]);
            mid++;
            low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high]);
            high--;

            break;
        }
    }
}