// ? Palindrome Checker: Write a function to check if a string is a palindrome using recursion.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string , int, int);

int main()
{
    string text = "anna";
    cout << isPalindrome(text, 0, text.length()-1);
    return 0;
}

bool isPalindrome(string text, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (text[start] == text[end]) && isPalindrome(text, start + 1, end - 1);
}