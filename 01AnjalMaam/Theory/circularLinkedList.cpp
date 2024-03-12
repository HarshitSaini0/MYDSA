#include <iostream>
using namespace std;

class LinkedList
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *start;
    int length;
    void inc_len();
    void dec_len();

public:
    LinkedList();
    LinkedList(int);
    LinkedList(int, int);
    void print();
    void add_at_beg(int);
    void add_at_end(int);
    void add_at_pos(int, int);
    void del_from_end();
    void del_from_beg();
    void del_from_pos(int);
    int len();
};

int main()
{
    system("cls");
    LinkedList L1;
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements here : ";

    for (int i = 0; i < n; i++)
    {
        int temp;
        // cout<<"add : ";
        cin >> temp;
        L1.add_at_end(temp);
        // cout<<"added";
    }
    // cout<<"\nHere\n";
    L1.print();
    return 0;
}

// all function for linked list
void LinkedList::inc_len()
{
    this->length++;
}
void LinkedList::dec_len()
{
    this->length--;
}
LinkedList::LinkedList()
{
    start = new Node;
    this->start = nullptr;
    this->length = 0;
}
LinkedList::LinkedList(int data)
{
    start = new Node;
    this->start->data = data;
    this->start->next = this->start;
    this->length = 1;
}
LinkedList::LinkedList(int number_of_elements, int value_to_elements)
{
    start = new Node;
    Node *ptr;
    start->data = value_to_elements;
    start->next = nullptr;
    ptr = new Node;
    ptr = start;
    for (int i = 1; i < number_of_elements; i++)
    {
        Node *temp;
        temp = new Node;
        temp->data = value_to_elements;
        temp->next = nullptr;
        ptr->next = temp;
        ptr = ptr->next;
    }
    ptr->next = start;
    this->length = number_of_elements;
}
void LinkedList::print()
{
    if (this->start == nullptr)
    {
        cout << "Empty list\n";
    }

    Node *ptr = start;
    while (ptr->next != this->start)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << " ";
    cout << endl;
}
void LinkedList::add_at_beg(int value)
{

    Node *temp;
    temp = new Node;
    temp->data = value;
    temp->next = start;
    if (start == nullptr)
    {
        this->start = temp;
        this->start->next = this->start;
    }
    Node *ptr = start;
    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    start = temp;

    inc_len();
}
void LinkedList::add_at_end(int value)
{
   
    if (start == nullptr)
    {
        this->start = new Node;
        this->start->data = value;
        this->start->next = start;

        this->inc_len();
        return;
    }

     Node *ptr, *temp;
    ptr = start;

    
    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    temp = new Node;
    temp->data = value;
    temp->next = start;
    ptr->next = temp;

    inc_len();
}
void LinkedList::add_at_pos(int position, int value)
{
    Node *temp;
    temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    if (position > this->length)
    {
        cout << "Invalid position \n";
        return;
    }
    else if (start == nullptr)
    {
        start = temp;
        inc_len();
        return;
    }
    else if (position == 1 || position == this->length)
    {
        position == 1 ? this->add_at_beg(value) : this->add_at_end(value);
        return;
    }
    else
    {
        Node *ptr = start;
        for (int i = 0; i < position - 1; i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
        inc_len();
    }
}
void LinkedList::del_from_end()
{
    Node *ptr = this->start;
    if (ptr->next == nullptr)
    {
        this->start = nullptr;
        delete ptr;
        this->dec_len();
        return;
    }
    while (ptr->next->next != this->start)
    {
        ptr = ptr->next;
    }

    Node *temp = ptr;
    ptr->next = this->start;
    delete temp;
    this->dec_len();
}
void LinkedList::del_from_beg()
{

    if (this->start->next == nullptr)
    {
        Node *ptr = this->start;
        this->start = nullptr;
        delete ptr;
        this->dec_len();
        return;
    }
    Node *ptr = this->start;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    Node *temp = this->start;
    this->start = this->start->next;
    ptr->next = this->start;
    delete temp;
    this->dec_len();
}
void LinkedList::del_from_pos(int position)
{
    if (position > this->length || position < 0)
    {
        cout << "Invalid position\n";
        return;
    }
    else if (position == 1 || position == this->length)
    {
        position == 1 ? this->del_from_beg() : this->del_from_end();
        return;
    }
    else
    {
        Node *ptr = this->start;
        for (int i = 1; i < position - 1; i++)
        {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        this->dec_len();
    }
}
int LinkedList::len()
{
    return (this->length);
}