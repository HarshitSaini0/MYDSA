#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // it will erase all occurrences of 1
    ms.count(1); // it will count all occurrences of 1

    ms.erase(ms.find(1));                 // only one element will be deleted
   // ms.erase(ms.find(1), ms.find(1) + 2); // It will delete 3 elements from address of first 1 ////it is showuing error idk why
    return 0;
}