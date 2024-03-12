// ? Towers of Hanoi: Write a program to solve the Towers of Hanoi puzzle using recursion.


#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from_rod,char to_rod,char extra_rod ){
    if(n==1) 
    {
        cout<<"Move "<<n<<" from "<<from_rod<<" to "<<to_rod<<"\n";
        return;
    }
    towerOfHanoi(n-1,from_rod,extra_rod,to_rod);
    cout<<"Move "<<n<<" from "<<from_rod<<" to "<<to_rod<<"\n";
    towerOfHanoi(n-1,extra_rod,to_rod,from_rod);
}


int main()
{
    towerOfHanoi(1,'a','b','c');
    return 0 ;
}