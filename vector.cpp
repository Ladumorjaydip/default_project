#include<bits/stdc++.h>
using namespace std;

int main(){
//    double a[10];
//    vector<int>v(16);
//    int x;
//    cin>>x;
//    v.push_back(x);
//     v.pop_back();  
     vector<pair<int,int>> ve = {{1,2},{2,4}};
         vector<pair<int,int>> ::iterator it = ve.begin();

    for( it = ve.begin(); it!=ve.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    vector<int> vec= {1,3,2,5,4,6,5};
    vector<int> ::iterator i = vec.begin();
    for( i = vec.begin(); i!=vec.end();i++){
        cout<<*i<<endl;
    }
    //range base loop copy o =f this vector

    for(int v : vec){
        cout<<v<<endl;
    }

}