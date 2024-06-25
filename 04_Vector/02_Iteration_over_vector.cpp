#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> b(5,10);
    
    // using for loop
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //  using iterators
    for (auto i = b.begin(); i < b.end(); i++)
    {
        cout << *i << " "; // getting the element by derefrencing 
    }

    cout<<endl;
    for(auto var : b)
    {
        cout << var << " ";
    }
    
    return 0;
}