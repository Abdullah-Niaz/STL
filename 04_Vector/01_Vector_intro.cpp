#include <bits/stdc++.h>
using namespace std;

// vector:
    // A standard container which offers fixed time access to individual elements in any order.
    //  vector is a dynamic contianer that grows and shrink dynamically as per size 
    // a = {1}
    // a = {1} -> {1,2}
    // a = {1,2} -> {1,2,3}
    // a = {1,2,4} -> {1,2,3,4}
    // managed my container class internally 


int main(){
        
    vector<int> a; // vector of class type int

    vector<int> b(5,10); // vector of class type int containing the 5 instances of 10

    vector<int> c{1,2,3,4,5}; // vector containg the elements

    vector<int> d(b.begin(),b.end()); // coping the vector 

 
    return 0;

}