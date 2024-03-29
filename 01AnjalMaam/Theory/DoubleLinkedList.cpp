#include <bits/stdc++.h>
using namespace std;

class DoubleLinkedList
{
    struct Node
    {
        int data;
        Node *prev, *next;
    };
    Node *start, *end;
    int length;
    void len_inc();
    void len_dec();

public:
    DoubleLinkedList();
    DoubleLinkedList(int);
    DoubleLinkedList(int, int);
    void print();
    void add_at_end(int);
    void add_at_beg(int);
    void add_at_pos(int, int);
    void del_from_end();
    void del_from_beg();
    void del_from_pos(int);
};

int main()
{
    // system("cls");
    DoubleLinkedList D1;
    // int n;
    // cout << "Enter the number of elements you want to enter : ";
    // cin >> n;
    for (int i = 1; i <= 6; i++)
    {
        // int temp;
        // cin >> temp;
        D1.add_at_beg(i * 10);
    }
    D1.print();
    D1.del_from_pos(6);
    D1.print();
    return 0;
}
void DoubleLinkedList::len_inc()
{
    this->length++;
}
void DoubleLinkedList::len_dec()
{
    this->length--;
}

DoubleLinkedList::DoubleLinkedList()
{
    this->start = new Node;
    this->start = nullptr;
    this->end = this->start;
    this->length = 0;
}
DoubleLinkedList::DoubleLinkedList(int data)
{

    this->start = new Node;
    this->start->next = nullptr;
    this->start->prev = nullptr;
    this->start->data = data;
    this->end = this->start;
    this->length = 1;
}
DoubleLinkedList::DoubleLinkedList(int number_of_elements, int value)
{
    this->start = new Node;
    this->start->next = nullptr;
    this->start->prev = nullptr;
    this->start->data = value;
    this->end = this->start;
    if (number_of_elements == 1)
        return;

    for (int i = 1; i < number_of_elements; i++)
    {
        Node *temp;
        temp = new Node;
        temp->data = value;
        temp->next = nullptr;
        temp->prev = this->end;
        this->end->next = temp;
        this->end = temp;
    }
    // cout<<"DID\n";
    this->length = number_of_elements;
}
void DoubleLinkedList::print()
{
    Node *ptr = start;
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}
void DoubleLinkedList::add_at_end(int value)
{
    if (this->start == nullptr)
    {
        this->start = new Node;
        this->start->next = nullptr;
        this->start->prev = nullptr;
        this->start->data = value;
        this->end = this->start;
    }
    else
    {
        Node *temp;
        temp = new Node;
        temp->data = value;
        temp->next = nullptr;
        temp->prev = this->end;
        this->end->next = temp;
        this->end = temp;
    }
    this->len_inc();
}
void DoubleLinkedList::add_at_beg(int value)
{
    if (this->start == nullptr)
    {
        this->start = new Node;
        this->start->next = nullptr;
        this->start->prev = nullptr;
        this->start->data = value;
        this->end = this->start;
    }
    else
    {
        Node *temp;
        temp = new Node;
        temp->data = value;
        this->start->prev = temp;
        temp->next = this->start;
        temp->prev = nullptr;
        this->start = temp;
    }
    this->len_inc();
}
void DoubleLinkedList::add_at_pos(int position, int value)
{
    if (position == 1)
    {
        this->add_at_beg(value);
        return;
    }
    else if (position - 1 == this->length)
    {
        this->add_at_end(value);
        return;
    }
    else if (position - 1 > this->length)
    {
        cerr << this->length << "Invalid position";
        return;
    }
    else
    {
        Node *temp, *ptr;
        temp = new Node;
        temp->data = value;
        ptr = start;
        for (int i = 1; i < position - 1; i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        temp->prev = ptr;
        ptr->next->prev = temp;
        ptr->next = temp;
        this->len_inc();
    }
}

void DoubleLinkedList::del_from_end()
{
    cout << "Done\n";
    if (this->start == nullptr)
    {
        cerr << "Empty list code : 404";
        return;
    }
    else
    {
        Node *ptr = this->end;
        this->end = ptr->prev;
        this->end->next = nullptr;
        delete ptr;

        this->len_dec();
    }
}
void DoubleLinkedList::del_from_beg()
{
    if (this->start == nullptr)
    {
        cerr << "Empty list code : 404";
        return;
    }
    else
    {
        Node *ptr = this->start;
        this->start = ptr->next;
        this->start->prev = nullptr;
        delete ptr;

        this->len_dec();
    }
}

void DoubleLinkedList::del_from_pos(int position)
{
    if (this->start == nullptr)
    {
        cout << "List is empty 404 List not found!\n";
        return;
    }
    else if (position == 1)
    {
        this->del_from_beg();
        return;
    }
    else if (position == this->length)
    {
        this->del_from_end();
        return;
    }
    else if (position > this->length)
    {
        cout << "Invalid position 404 index not found!\n";
        return;
    }
    else
    {
        Node *ptr = this->start;
        for (int i = 1; i < position - 1; i++)
        {
            ptr = ptr->next;
        }
        Node *temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        delete temp;
        this->len_dec();
    }
}