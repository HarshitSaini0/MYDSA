// ?Power of a Number: Write a function to calculate the power of a number raised to another non-negative integer using recursion.

#include <bits/stdc++.h>
using namespace std;

long double power(int,int);

int main()
{
    cout<<power(10,10)<<" \n";
    return 0 ;
}
long double power(int num,int pow){
if(pow == 1){
    return num;
}
return num * power(num,pow-1);
}