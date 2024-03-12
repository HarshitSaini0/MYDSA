#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter your string : ";

    cin >> str;

    unordered_map<char, int> myChar;

    for (int i = 0; i < str.length(); i++)
    {
        myChar[str[i]] += 1;
    }

    for (auto it : myChar)
    {
        cout << it.first << " -> " << it.second << "\n";
    }

    return 0;
}