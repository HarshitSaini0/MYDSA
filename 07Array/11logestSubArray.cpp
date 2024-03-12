#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>, int);

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int res = maxSubArray(arr, 4);
    cout << res;
    return 0;
}
int maxSubArray(vector<int> arr, int k)
{
    int i = 0;
    int j = 0;
    int sum = arr[0];
    int maxLen = 0;
    while (i < arr.size())
    {
        while (sum > k && j <= i)
        {
            sum -= arr[j];
            j++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, (i - j) + 1);
        }
        i++;
        if (i < arr.size())
            sum += arr[i];
    }
    return maxLen;
}