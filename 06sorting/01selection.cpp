#include <bits/stdc++.h>
using namespace std;

void do_sort(vector<int> &array)
{
    int min_index, temp;
    for (int i = 0; i < array.size(); i++)
    {
       min_index = i;
        for (int j =i+1; j < array.size(); j++)
        {
            if(array[min_index]>array[j]) 
                min_index = j;
            

        }
        temp = array[i];
        array[i] = array[min_index];
        array[min_index]=temp;
    }
}

int main()
{
    vector <int> arr = {23,12,10,24,30,31,40};
    do_sort(arr);
    for(int i:arr) cout<<i<<" ";
    return 0;
}