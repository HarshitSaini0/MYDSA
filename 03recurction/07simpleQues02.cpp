#include <bits/stdc++.h>
using namespace std;

void print_nums(int num, int i = 1)
{
    if (i > num)
        return;
    cout << i << "\n";
    print_nums(num, i + 1);
}
void print_nums_rev(int num, int i = 1)
{
    if (i > num)
        return;
    cout << (num - i + 1) << "\n";
    print_nums_rev(num, i + 1);
}

void print_nums_asc(int i, int n)
{
    if (i < 1)
        return;
    print_nums_asc(i - 1, n);
    cout<<i<<"\n";
}
void print_nums_dec(int i, int n)
{
    if (i < 1)
        return;
    print_nums_dec(i - 1, n);
    cout<<(n-i+1)<<"\n";
}


int main()
{
    system("cls");
    print_nums_dec(10,10);
    return 0;
}