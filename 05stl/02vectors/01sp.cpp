#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");

    vector<int> v = {10, 21, 23, 15, 19, 30};
    vector<int> v1;
    v1.push_back(10);    // add element at end
    v1.emplace_back(20); // does the same job but faster then push_back

    vector<pair<int, int>> v2;
    v2.push_back({10, 11});
    v2.emplace_back(20, 21); // syntax  difference ;)

    vector<int> v3(5, 101); // This will create 5 elements in vector each of value 101;

    vector<int> v4(5); // only size is given

    // how to access a vector

    /*
    ->  simple iteration for(int i = 0; i<size;i++)
    -> using iterator
        ->vector <int>::iterator it = v.begin() to iterate use ++
        ->vector <int>::iterator it = v.end() to iterate use --
        ->vector <int>::iterator it = v.rend() to iterate use ++
        ->vector <int>::iterator it = v.rbegin() to iterate use --
    */

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;

    // for each loop

    for (auto it : v)
        cout << it << " ";

    v.erase(v.begin()); // del one element
    cout << endl;
    for (auto it : v)
        cout << it << " ";

    v.erase(v.begin() + 1, v.begin() + 3);
    cout << endl;
    for (auto it : v)
        cout << it << " ";

    cout << endl;

    // how to insert element at in between vector
    vector<int> v5 = {10, 20, 30, 40}; /// simple here we have created a vector
    for (auto it : v5)
        cout << it << " ";

    cout << endl;
    v5.insert(v5.begin(), -10); // here we have inserted an element in the beginning
    for (auto it : v5)
        cout << it << " ";

    cout << endl;
    v5.insert(v5.begin() + 2, 2, 15); // here we have added two same elements at some position
    for (auto it : v5)
        cout << it << " ";

    // how to enter another vector in a vector ;)

    vector<int> copy(3, 55);

    v5.insert(v5.begin() + 3, copy.begin(), copy.end());
    cout << endl;
    for (auto it : v5)
        cout << it << " ";
    cout << endl;
    for (auto it : v)
        cout << it << " ";
    cout << endl;
    v.swap(v5);
    // it will swap the vector

    v.clear(); // it will clear the vector !!
    cout << v5.empty();

    return 0;
}