#include <bits/stdc++.h>
using namespace std;

class Queue
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *front, *rear;
    int Len;
    void inc();
    void dec();

public:
    Queue();
    Queue(int);
    Queue(int, int);
    void enque(int);
    int deque();
    void print();
};

int main()
{
    system("cls");
    Queue q;
    for (int i = 1; i < 7; i++)
    {
        q.enque(i * 10);
    }
    q.print();
    q.deque();
    q.print();
    return 0;
}

void Queue::inc()
{
    this->Len++;
}
void Queue::dec()
{
    this->Len--;
}
Queue::Queue()
{
    this->front = new Node;
    this->front = nullptr;
    this->rear = front;
    this->Len = 0;
}
Queue::Queue(int value)
{
    this->front = new Node;
    this->front->data = value;
    this->front->next = nullptr;
    this->rear = this->front;
    this->Len = 1;
}
Queue::Queue(int number_of_elements, int value)
{
    this->front = new Node;
    this->front->data = value;
    this->front->next = nullptr;
    Node *temp, *ptr;
    ptr = this->front;
    for (int i = 1; i < number_of_elements; i++)
    {
        temp = new Node;
        temp->data = value;
        temp->next = nullptr;
        ptr->next = temp;
        ptr = ptr->next;
    }
    this->rear = ptr;
    this->Len = number_of_elements;
}
void Queue::enque(int value)
{
    if (this->front == nullptr)
    {
        this->front = new Node;
        this->front->data = value;
        this->front->next = nullptr;
        this->rear = this->front;
        this->Len = 1;
        return;
    }
    Node *temp;
    temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    this->rear->next = temp;
    this->rear = temp;
    this->inc();
}
int Queue::deque()
{
    if(this->front==nullptr){
        cout<<"Empty queue\n";
        return -1;
    }
    Node *temp;
    int return_value = this->front->data;
    temp = this->front;
    this->front = this->front->next;
    delete temp;
    this->dec();
    return return_value;
}

void Queue::print()
{
    Node *ptr = this->front;
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}
