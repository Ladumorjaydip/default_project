#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<string> s={"jack","raj","kaajal"};
  s.insert("naman");                                                            
  for(auto it : s){
    cout<<it<<endl;
  }
}