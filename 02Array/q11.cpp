
// factorial using recursion

#include <bits/stdc++.h>
using namespace std;

long double factorial(int);
int sumOfArray(int[], int);

int main()
{
    cout << factorial(125) << " \n";
    int array[]={12,15,20,21,25,17,18,19};
    int n = sizeof(array)/sizeof(array[0]);
    cout << sumOfArray(array,n-1) << " \n";
    return 0;
}

long double factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;

    return factorial(num - 1) * num;
}

int sumOfArray(int array[], int size)
{
    if (size == 0)
        return array[0];
    
    return array[size] + sumOfArray(array, size-1);
}
