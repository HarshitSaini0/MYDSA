#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(int i,int n,string str){
    if(i>=n/2) return true;
    if(str[i]!=str[n-1-i]) return false;
    return is_palindrome(i+1,n,str);
}

int main()
{
    cout<<(is_palindrome(0,6,"MADLAM")?"YES":"NO");
    return 0;
}