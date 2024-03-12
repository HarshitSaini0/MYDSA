#include <bits/stdc++.h>
using namespace std;

vector<int> do_something(vector<int>, vector<int>);
vector<int> do_something_better(vector<int>, vector<int>);

int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 7, 8, 8, 8, 9, 10};
    vector<int> b = {3, 3, 3, 5, 6, 7, 7, 7, 10, 12, 13};
    vector<int> c = do_something_better(a, b);
    for (int i : c)
        cout << i << " ";
    return 0;
}
vector<int> do_something(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();

    vector<int> arr(n1, 0);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && arr[j] == 0)
            {
                arr[j] = 1;
                break;
            }
            if (a[i] < b[j])
                break;
        }
    }
    vector<int> res;
    for (int i = 0; i < n2; i++)
        if (arr[i] == 1)
            res.push_back(b[i]);

    return res;
}
vector<int> do_something_better(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> res;

    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
    }
    return res;
}