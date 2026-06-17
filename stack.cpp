#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(3);
    s.push(31);
    s.push(34);
    s.push(5);
    s.push(5);
    while(true){
   if(s.top()==s.empty()-1){
    cout<<"the stack is empty"<<endl;
    break;
   }else{
        cout<<s.top()<<endl;
        s.pop();

    }
    }

}