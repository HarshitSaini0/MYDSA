#include <bits/stdc++.h>
using namespace std;

void left_sift();

int main()
{
    left_sift();
    return 0;
}
void left_sift()
{
    vector<int> array = {9, 3, 1, 7, 8, 5, 2};
    int n = array.size();
    int temp = array[0];
    for (int i = 1; i < n; i++)
        array[i - 1] = array[i];
    array[n - 1] = temp;

    for (int i : array)
        cout << i << " ";
}