#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int,int> m;
    map <int ,pair<int,int>> m2;
    map <pair<int,int>,int> m3;

    m[1] = 2;

    // m.emplace({3,1});

    m.insert({5,10});


    m2[1] = {1,2};


    for(auto it : m){
        cout<<*it<<" ";
    }
    return 0;
}