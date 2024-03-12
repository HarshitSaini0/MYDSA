#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

bool two_sum(vector<int> arr, int t)
{
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int a = arr[i];
        int req = t - a;
        if (mp.find(req) != mp.end())
        {
            return true;
        }
    }
    return false;
}