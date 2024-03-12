#include<bits/stdc++.h>
using namespace std;

int main()
{

    // use FIFO
    system("cls");
    queue <int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.emplace(40);

    q.back() += 5 ;

    cout<<q.back()<<"\n";
    cout<<q.front()<<"\n";

    q.pop();

    cout<<q.front()<<"\n";



    // priority_queue
    priority_queue <int,vector<int>,greater<int>> pq;
    pq.push(21);
    pq.push(15);
    pq.push(18);
    pq.emplace(20);

    cout<<pq.top()<<endl;

    
    return 0;
}