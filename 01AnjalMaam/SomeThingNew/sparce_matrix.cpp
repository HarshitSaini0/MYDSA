#include <bits/stdc++.h>
using namespace std;

int main()
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

    return 0;
}