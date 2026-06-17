#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "jaxk";
    m[5] = "jak";
m[1] = "raj";
    m[3] = "axk";

    m[7] = "jxk";
    m.insert({0,"uzi"});

    auto it = m.find(3);
    
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}