// ? Reverse a String: Write a function to reverse a string using recursion

#include <bits/stdc++.h>
using namespace std;

void strRev(string &, int, int);

int main()
{
    string a = "hello";
    string b = " harshit";
    string c = a + b;
    strRev(a,0, a.length() - 1);
    cout <<  a<< " \n";
    return 0;
}
void strRev(string &str, int start, int end)
{
    if (start >= end)
        return;
    
    swap(str[start], str[end]);
    strRev(str, start + 1, end - 1);
}