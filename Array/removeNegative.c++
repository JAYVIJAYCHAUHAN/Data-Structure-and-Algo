#include<bits/stdc++.h>
using namespace std;
void negative(vector<int>&arr){
    vector<int>newArr;
    for(auto x:arr){
        if(x>=0){
            newArr.push_back(x);
        }
    }
    for(auto x:newArr){
        cout<<x<<" ";
    }
}
int main(){
    vector<int>arr={1,2,-3,4,-5};
    negative(arr);
    
}