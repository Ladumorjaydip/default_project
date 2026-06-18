#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int mostwater(vector<int>line){
        int left = 0;
        int right = line.size()-1;
    int mostwater = 0;
    int currarea = 0;
       while(left<right){
            currarea = (min(line[left],line[right])*(right-left));

            mostwater = max(currarea,mostwater);
            
            if(line[left]<line[right]){
                left++;
            }else{
                right--;
            }
            // cout<<mostwater<<endl;
        }
        return mostwater;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int most = mostwater(height);

    cout<<most<<endl;

}