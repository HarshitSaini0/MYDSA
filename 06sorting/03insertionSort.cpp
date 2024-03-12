#include <bits/stdc++.h>
using namespace std;

void do_sort(vector<int> &);

int main()
{
    system("cls");
    vector<int> arr = {23, 12, 10, 24, 30, 31, 40};
    do_sort(arr);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
void do_sort(vector<int> &arr)
{
    int temp;
    for (int i = 0; i < arr.size() - 1; i++)
    {

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}