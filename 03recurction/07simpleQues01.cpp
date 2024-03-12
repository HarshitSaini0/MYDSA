#include<bits/stdc++.h>
using namespace std;

void printName(int n)
{
    if(n<=0) return ;

    cout<<"Harshit\n";
    printName(n-1);
}
int main()
{
    system("cls");
    printName(5);
    return 0;
}