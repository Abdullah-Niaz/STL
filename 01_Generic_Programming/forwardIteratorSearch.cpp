#include <bits/stdc++.h>
using namespace std;

template <class forwardIterator, class T>
forwardIterator Search(forwardIterator start, forwardIterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(4);
    l.push_back(6);
    l.push_back(8);
    int key = 6;
    auto it = Search(l.begin(), l.end(), key);
    cout << ": " << *it;
    return 0;
}