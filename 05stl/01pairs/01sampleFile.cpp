#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    pair <int,int> myPair = {1,2}; // This simple pair
    pair <vector<int>,vector<int>> my_pair = {{1,2,3,4,1,3},{2,3,5,10}};  // This is like its nesting
    pair <pair<int,int>,pair<int,int>> my_pair_pair = {{1,2},{3,4}}; // Again it is its nesting

    cout<<my_pair.first[0]<<"\n";
    cout<<myPair.first<<"\n";
    cout<<my_pair_pair.first.first<<"\n";

    return 0;
}