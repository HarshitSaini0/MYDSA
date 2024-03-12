#include <bits/stdc++.h>
using namespace std;

class Stack
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *top;

public:
    Stack()
    {
        this->top = new Node;
        this->top = nullptr;
    }
    void push(int val)
    {

        if (this->top == nullptr)
        {
            this->top = new Node;
            this->top->data = val;
            this->top->next = nullptr;
        }
        else
        {
            Node *temp;
            temp = new Node;
            temp->data = val;
            temp->next = this->top;
            this->top = temp;
        }
    }
    int pop(){
        if(this->top == nullptr){
            return -1;
        }
        int res = this->top->data;
        Node * temp = this->top;
        this->top= this->top->next;
        delete temp;
        return res;
    }
    int at_top(){
        if(this->top == nullptr){
            return -1;
        }
        int attop = this->top->data;
        return  attop;
    }
};
int main()
{
    Stack s;
    // cout<<"Enter the number of elements you want to enter : ";
    int n = 5;
    // cin>>n;
    for(int i = 0;i<n;i++){
        s.push(10*i);
    }
    cout<<s.at_top()<<endl;
    for(int i = 0 ;i<n-2;i++){
        cout<<s.pop()<<endl;
    }
    return 0;
}