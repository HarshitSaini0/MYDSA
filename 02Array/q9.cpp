// ?Write a program to implement merge sort to sort an array in ascending order.

#include <bits/stdc++.h>
using namespace std;

void print(vector<int>);
void merge(vector<int>, vector<int>, vector<int> &);
void merge(vector<int>, vector<int>, vector<int> &);

int main()
{

    return 0;
}

void print(vector<int> arr)
{
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}

void merge(vector<int> array1, vector<int> array2, vector<int> &array3)
{

    int loopLength = array1.size() + array2.size();

    int i = 0, j = 0, k = 0;
    while (k < loopLength && i < array1.size() && j < array2.size())
    {
        if (array1[i] < array2[j])
        {
            array3[k] = array1[i];
            i++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
        }
        k++;
    }
    if (i < array1.size())
    {
        while (k < loopLength)
        {
            array3[k++] = array1[i++];
        }
    }
    else if (j < array2.size())
    {
        while (k < loopLength)
        {
            array3[k++] = array2[j++];
        }
    }
}
