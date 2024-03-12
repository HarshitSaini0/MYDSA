//??Write a program to find the minimum and maximum elements in an array.

#include <bits/stdc++.h>
using namespace std;

int maxElement(vector <int> );
int minElement(vector <int> );

int main()
{
    vector <int> myArray = {12,11,23,20,21,43,30,35,10};
    cout<<"Max : "<<maxElement(myArray)<<"\nMin : "<<minElement(myArray);
    
    return 0 ;
}

int maxElement(vector <int> arr ){
int res = arr[0];
for(int element : arr){
    if(res<element) res = element;
}
return res;
}
int minElement(vector <int> arr ){
int res = arr[0];
for(int element : arr){
    if(res>element) res = element;
}
return res;

}