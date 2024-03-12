#include<bits/stdc++.h>
using namespace std;

void sum_of_natural_numbers(int n,int sum = 0){
    if(n<1) {
        cout<<"SUM is "<<sum<<"\n";
        return;
    }
    sum_of_natural_numbers(n-1,sum+n);
}
int sum_in_diff(int n){
    if(n<=0) return 0;
    return n+sum_in_diff(n-1);
}

int main()
{
    system("cls");
   cout<< sum_in_diff(10 ); 
    return 0;
}