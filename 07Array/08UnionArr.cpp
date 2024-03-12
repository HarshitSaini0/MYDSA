#include <bits/stdc++.h>
using namespace std;

vector<int> union_sort(vector<int>, vector<int>);

int main()
{
    vector <int> a = {1,1,2,3,4,7,8,8,8,9,10};
    vector <int> b = {1,1,3,3,5,6,7,7,7,10,12,13};
    vector <int> c = union_sort(a,b);
    for(int i : c) cout<<i<<" ";

    return 0;
}
vector<int> union_sort(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> unionArr;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }
    while (j<n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
    }
    

    return unionArr;
}