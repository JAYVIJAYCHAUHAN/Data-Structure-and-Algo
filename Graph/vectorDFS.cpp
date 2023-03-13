#include<bits/stdc++.h>
using namespace std;
 const int n=1e5+10;
 bool vis[n];
 vector<int>g[n];
 vector<vector<int>>v;
 vector<int>cc;
 int dfs(int vertex){
    vis[vertex]=true;
      cc.push_back(vertex);
    for( auto i :g[vertex])
    {
        if(!vis[i])
        dfs(i);
    }
 }
 int main(){
    int n,e;
    cin>>n>>e;
    for(int i =0;i<e;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
  
    int count=0;
    for(int i =0;i<n;++i){
        if(vis[i]) continue;
        cc.clear();
      dfs(i);
      v.push_back(cc);
      count++;  
    }
    cout << cc.size()<<endl;
   // cout << count << endl;
   for(auto cc:v){
    for(int i:cc){
        cout << i << " " ;
    }
    cout << endl;
   }

 }