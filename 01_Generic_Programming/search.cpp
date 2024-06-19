#include <iostream>
using namespace std;

template<typename T>
int search(T arr[], int n, T key){
    for(int p = 0 ; p < n ; p++){
        if(arr[p]== key){
            return p;
        }
    }
    return n;
};


int main() {

    // for integers array
    // int arr[] = {1,2,3,4,5,6,7,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int key =  6;
    // int r  = search(arr,n,key);
    // cout<<"Found at " << r;


    // for floats array
    float a[] = {1.2,1.3,1.4,1.5,1.6};
    int ns = sizeof(a)/sizeof(float);
    float fkey = 1.4;
    cout<<search(a,ns,fkey)<<endl;;

}
