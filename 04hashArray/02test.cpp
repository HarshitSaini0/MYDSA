#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char myStr[100];
    cin>> myStr;

    int arr[26] = {0};


    int strSize = 0 ;

    for(strSize = 0 ;myStr[strSize]!='\0';strSize++);

    cout<<"\n"<<strSize<<endl;
    for(int i = 0 ;i< strSize ;i++)
        arr[myStr[i]-97] +=1;

    int alp_num;
    
    cout<<"Enter the number of alp : ";
    cin>> alp_num ;
    for(int i = 0;i<alp_num;i++){
        char temp ;
        cin>> temp ;
        cout<<temp<<" : "<<arr[temp-97]<<endl;
    }
    

    
    return 0;
}