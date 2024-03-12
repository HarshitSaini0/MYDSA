#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2,2, 3, 1, 6, 3, 2};

    map<int, int> my_num_count;
    for (int i : arr)
        cout << my_num_count[i] << " ";
   

    cout << "\n";
    for (int i : arr)
        my_num_count[i] += 1;

     for(auto it : my_num_count)
        cout<<it.first<<" -> "<<it.second<<'\n';
     cout << "\n";
    for (int i : arr)
        cout << my_num_count[i] << " ";
    return 0;
}