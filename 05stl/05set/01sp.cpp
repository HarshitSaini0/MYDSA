#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Sorted and unique
    //every thing works in log n
    set <int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    auto it  = st.find(10); // {1,2,3,4,5,10} -> return its address

    auto it2 = st.find(11); // {1,2,3,4,5,10} -> return address like at st.end()


    st.erase(5); // if 5 exist in set it will delete it 
    st.count(2); // if 1 exist in array it will provide 1 (may understand it as true) other wise it will give us 0 (may understand it as false)


    auto it3 = st.find(3); // address of 3
    auto it4 = st.find(6); // address of 6
    st.erase(it3,it4);


    auto it = st.lower_bound(2);
    auto it = st.upper_bound(7);

    return 0;
}