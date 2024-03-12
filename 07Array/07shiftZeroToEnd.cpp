#include <bits/stdc++.h>
using namespace std;

void shift_zeros(vector<int> &);

int main()
{
    vector<int> arr = {1, 2, 0, 3, 0, 5, 7, 8, 0, 6};
    shift_zeros(arr);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
void shift_zeros(vector<int> &arr)
{
    int j = 0;
    bool con = true;
    while (con||j>=arr.size())
    {
        // cout<<"j loop : "<<j<<" "<<arr[j]<<"\n";
        if (arr[j] == 0)
        {
            // cout<<"j loop arr[j]==0 : "<<j<<" "<<arr[j]<<"\n";
            con = false;
        }
        else{
            j++;
        }

    }
    for (int i = j; i < arr.size(); i++)
    {
        // cout<<"i loop : i = "<<i<<" j = "<<j<<" arr[i] "<<arr[i]<<" arr[j] "<<arr[j]<<"\n";
        if (arr[i] != 0)
        {
            // cout<<"i loop (arr[i]!=0) : i = "<<i<<" j = "<<j<<" arr[i] "<<arr[i]<<" arr[j] "<<arr[j]<<"\n";

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] =temp;
            j++;
            
        }
    }
}