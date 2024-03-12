#include <bits/stdc++.h>
using namespace std;

void d_rotate(vector <int> &, int);// Brute force sol 
void d_rotate_o(vector <int> &, int);//Optimal

int main()
{
vector <int> arr ={1,2,3,4,5,6,7,8};
d_rotate_o(arr,4);
for(int i : arr)cout<<i<<" ";
    return 0;
}
void d_rotate(vector<int> &arr, int d)
{
    d %= (arr.size());
    if (d == 0)
        return;
    vector<int> temp;
    for (int i = 0; i < d; i++)
        temp.push_back(arr[i]);

    for (int i = d; i < arr.size(); i++)
        arr[i - d] = arr[i];

    int j = 0;
    for (int i = arr.size() - d; i < arr.size(); i++)
        arr[i] = temp[j++];
}
void d_rotate_o(vector<int> &arr, int d){
    d %= (arr.size());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}