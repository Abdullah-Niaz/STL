#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n ;
    cout<<"Enter the Number of Pairs You Want: ";
    cin>> n ;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>> x >> y;
        v.push_back(make_pair(x,y));
    }

    cout<<"Cordinates x, y" << endl;
    for( auto a:v){
        std::cout <<"x: "<< a.first<< " Y: "<<a.second << std::endl;
    }
    

    
    return 0;
}