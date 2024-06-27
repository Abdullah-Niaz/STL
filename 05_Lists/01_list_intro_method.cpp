#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l{1, 2, 3, 5, 4, 40};

    // Method
    l.pop_back();     // pop out the element from the end of the list
    l.pop_front();    // pop out the element from the end of the list
    l.push_back(10);  // push the element from the back of the list
    l.push_front(50); // push the element from the top of th list

    l.remove(50); // removes the element from the list
    l.sort();     // sort the elements inside the list in assceding order
    l.reverse();  // reverse the list

    
    for (auto a : l)
    {
        cout << a;
        cout << "-->";
    }

    return 0;
}