#include<bits/stdc++.h>
using namespace std;

int main()
{
    // L I F O
    system("cls");
     stack <int> st1 ;
     st1.push(1);
     st1.push(3);
     st1.push(6);
     st1.push(4);
     st1.emplace(10); // push and emplace both are the same things :)


     cout<<st1.top()<<"\n"; //this will give the value of value / element at the top
    
    st1.pop(); // this will delete top element /value

    cout<<st1.size()<<"\n";
    cout<<st1.empty()<<"\n"; // it give value weather stack is empty or not 

    stack <int> st ;
    st1.swap(st); // it will swap two stacks





    return 0;
}