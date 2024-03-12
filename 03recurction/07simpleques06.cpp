#include <bits/stdc++.h>
using namespace std;

int fib(int);

int main()
{
    cout << fib(10);
    return 0;
}
int fib(int n)
{
    if (n <= 1)
        return n;
    // cout << n << endl;
    return fib(n - 1) + fib(n - 2);
}
