#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6,7};
    v.reserve(1000000);
    // push_operation it takes O(1) complexity 
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    // emplace back 
    v.emplace_back(11);
    v.emplace_back(12);
    v.emplace_back(13);


    // deletion operations 
    v.pop_back();
    v.pop_back();
    v.pop_back();

    // insertion operation
    v.insert(v.begin() + 2, 14, 100);

    cout<< endl;
    // size of vector 
    cout<< v.size() << endl;
    cout<< v.capacity() << endl;
    
    // resize the vector
    v.resize(10);
    cout << v.capacity() << endl;
    
    
    cout<<"Front: " << v.front() << endl;
    cout<<"Back: " << v.back() << endl;
    for(auto x : v)
    {
        cout<<x << " ";
    }   
    return 0;
}