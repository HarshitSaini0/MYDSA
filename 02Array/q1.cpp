// ?? Write a program to find the sum and average of all elements in an array.
#include <bits/stdc++.h>
using namespace std;


int ArraySum(vector <int>);
double ArrayAvg(vector <int>);

int main()
{
    vector <int> myArray = {10,12,14,8,19};
    cout<<"Sum of element is : "<<ArraySum(myArray)<<"\nAverage of array : "<<ArrayAvg(myArray)<<"\n\n";
    return 0 ;
}



double ArrayAvg(vector <int>array){
    int sum=0;
    for(int element : array){
        sum+=element;
    }
    return (double)sum/(array.size());
}

int ArraySum(vector <int>array){
    int sum=0;
    for(int element : array){
        sum+=element;
    }
    return sum;
}