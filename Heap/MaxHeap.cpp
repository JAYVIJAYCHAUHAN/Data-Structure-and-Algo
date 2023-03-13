#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;
    int a[10]={2,3, 12,34 ,43 ,45};
    for(int i = 0; i<6;i++){
        q.push(a[i]);
    }
    while(!q.empty()){
        cout << q.top() <<" "<< endl;
        q.pop();
    }
    return 0;
}