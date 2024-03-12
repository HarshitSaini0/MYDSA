// ?Write a program to merge two sorted arrays into a single sorted array
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void merge(vector<int>, vector<int>, vector<int> &);
void print(vector<int>);

int main()
{
    vector<int> myArray01 = {1, 2, 4, 6, 10};
    vector<int> myArray02 = {3, 4, 8, 9, 12};
    print(myArray01);
    print(myArray02);
    vector<int> myArray03;
    for (int i = 0; i < myArray01.size() + myArray02.size(); i++)
        myArray03.push_back(i);
    // myArray03.resize(10);
    merge(myArray01, myArray02, myArray03);
    // print(myArray01);
    // print(myArray02);
    print(myArray03);
    cout << myArray01.size() << " " << myArray02.size() << " " << myArray03.size() << " \n";

    return 0;
}

void merge(vector<int> array1, vector<int> array2, vector<int> &array3)
{
    sort(array1.begin(), array1.end());
    sort(array2.begin(), array2.end());
    // array3.resize(array1.size()+array2.size());
    int loopLength = array1.size() + array2.size();
    // cout<<array1.size()<<" "<<array2.size()<<" "<<array3.size()<<" "<<loopLength<<" \n";
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

void print(vector<int> arr)
{
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}