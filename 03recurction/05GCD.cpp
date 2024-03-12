// ?Greatest Common Divisor (GCD): Write a function to find the GCD of two non-negative integers using recursion.
#include <bits/stdc++.h>
using namespace std;

int GCD(int,int);

int main()
{
    cout<<GCD(100,25) ;    
    return 0 ;
}
int GCD(int a,int b){
if(b==0) return a ;
return GCD(b,a%b);
}