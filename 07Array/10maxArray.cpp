#include <bits/stdc++.h>
using namespace std;

int f1(vector<int> &);
int f2(vector<int> &);
int f3(vector<int> &);

int main()
{
    vector<int> a = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    cout << f3(a);
    return 0;
}
int f1(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int counter = 0;
        for (int j = 0; i < a.size(); j++)
        {
            if (a[j] == a[i])
            {
                counter++;
            }
        }
        return a[i];
    }
}

int f2(vector<int> &a)
{
    int n = a.size();
    int greatest = a[n - 1];
    vector<int> arr(greatest, 0);
    for (int i = 0; i < n; i++)
        arr[a[i]] += 1;

    for (int i = 0; i < n; i++)
        if (arr[a[i]] == 1)
            return a[i];
}

int f3(vector<int> &a)
{
    int n = a.size();
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ a[i];

    return res;
}
