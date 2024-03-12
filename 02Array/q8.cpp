// ?Write a program to implement bubble sort to sort an array in ascending order.
// ?Write a program to implement selection sort to sort an array in ascending order.
// ?Write a program to implement insertion sort to sort an array in ascending order.
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &);
void selectionSort(vector<int> &);
void insertionSort(vector<int> &);
void print(vector<int>);

int main()
{
    vector<int> myArray = {12, 21, 10, 15, 23, 25, 30, 29};
    print(myArray);
    insertionSort(myArray);
    print(myArray);

    return 0;
}

void bubbleSort(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 1; j < array.size() - i; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}
void selectionSort(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if(array[i]>array[j]){
                int temp = array[j ];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}
void insertionSort(vector<int> &array){
for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(array[i]<array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
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
