#include <bits/stdc++.h>
using namespace std;

class List;

int using_array();
int using_list();

int main()
{

    // using_array();
    using_list();

    return 0;
}
class List
{
    struct Node
    {
        int row;
        int col;
        int data;
        Node *next;
    };
    int length;

public:
    Node *start;
    List();
    void add_at_end(int, int, int);
    void print();
};
List::List()
{
    this->length = 0;
    this->start = nullptr;
}

void List::add_at_end(int row, int col, int data)
{

    Node *ptr, *temp;

    temp = new Node;
    temp->row = row;
    temp->col = col;
    temp->data = data;
    temp->next = nullptr;
    if (start == nullptr)
    {
        start = temp;
        this->length++;
        return;
    }

    ptr = start;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    this->length++;
}
void List::print()
{
    Node *ptr = start;
    cout << "Row\tCol\tData\n";
    while (ptr != nullptr)
    {
        cout << ptr->row << "\t" << ptr->col << "\t" << ptr->data << "\n";
        ptr = ptr->next;
    }

    cout << endl;
}

int using_array()
{

    system("cls");
    int r = 4, c = 5;
    int arr[r][c] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};

    int size = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] != 0)
                size++;

    int the_matrix[3][size];

    int vals = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] != 0)
            {
                the_matrix[0][vals] = i;
                the_matrix[1][vals] = j;
                the_matrix[2][vals] = arr[i][j];
                vals++;
            }

    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Rows : ";
            break;
        case 1:
            cout << "Cols : ";
            break;
        case 2:
            cout << "Vals : ";
            break;
        }
        for (int j = 0; j < size; j++)
        {
            cout << the_matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int using_list()
{
    system("cls");
    int r = 4, c = 5;
    int arr[r][c] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};

    int size = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] != 0)
                size++;

    int vals = 0;
    List l1;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] != 0)
            {
                l1.add_at_end(i, j, arr[i][j]);
                vals++;
            }

    l1.print();
}
