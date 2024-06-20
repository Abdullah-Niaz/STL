#include <bits/stdc++.h>
using namespace std;

int main(){
    string s0; // object s of class type string 
    string *s1 = new string("Hello World");
    string s2 = "Hello World of s2";
    string s3(s2);

    char s[] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    int p = 0 ;
    // while (s[p] != '\0')
    // {
    //     cout<<s[p];
    //     p++;
    // }
    

    // if(s0.empty()){
    //     cout<<"S0 is empty";
    // }
    s0.append("I love C++");
    s0 += " because it is conceptual";
    // cout<<s0<<endl;
    // cout<< s0.length();
    s0.clear();
    // cout<<s0 << endl;


    string sa = "hello";
    string sb = "Hello";
    // cout<< sa.compare(sb);

    // Overloaded operator 
    // if ( sa > sb){
    //     cout<<"Sa is LexioGraphically Greater than Sb ";
    // }
    
    // cout<<s;


    string h = "hello World";

    // iterate over the string using loop
    for(int i = 0;i<h.length();i++){
        cout<<h[i];
    }
    cout<<endl;

    // Iterate over the string using iterators 
    for (auto i = h.begin(); i < h.end(); i++)
    {
        cout<<*i;
    }

    cout<<endl;
    for(auto s:h){
        cout<<s;
    }
    return 0;
}