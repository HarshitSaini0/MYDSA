#include <bits/stdc++.h>
using namespace std;

int main()
{

    system("cls");
    int n;
    cout<<"Enter your array's length : ";
    cin>>n;
    vector <int> arr;
    for(int i = 0 ;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int myHash[99999] ={0};

    for(int i = 0;i<n;i++)
        myHash[arr[i]]+=1;
    

    int nums ;
    cout<<"Enter number of numbers you want to look for : ";
    cin>>nums;
    while(n--){
        int temp;
        cin>> temp;
        cout<<temp<<" : "<<myHash[temp]<<"\n";
    }

    
    // for(int i=0;i<13;i++)
    // {cout<<i<<" : "<<myHash[i]<<"";}

    for(int e : arr) cout<<e<<" ";
    return 0;
}