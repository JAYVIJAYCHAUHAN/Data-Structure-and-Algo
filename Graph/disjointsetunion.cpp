#include<bits/stdc++.h>
using namespace std;
  const int N=1e5+4;
  vector<int>parent(N);
  vector<int>size(N);
  void make(int v){
      parent[v]=v;
      size[v]=1;
  }
  int find_set(int v){
      if(v == parent[v])
      return v;
      return parent[v] = find_set(parent[v]);
  }
  void union_set(int a , int b){
      a=find_set(a);
      b=find_set(b);

      if(a != b){
          if(size[a]<size[b])
          swap(a,b);
          parent[b] = a;
          size[a]+=size[b];
      }
  }
      int main(){
          for(int i=0;i<N;i++){
              make_set(i);
          }
          int n,m;
          cin>>n>>m;
          vector<vector<int>edges;
          int u,v;
          cin>>u>>v;
          edged.push_back({u,v});

      
      bool cycle=false;
      for(auto i=0;edges){
          int u =i[0];
          int v = i[1];
          int x = find_set(u);
          int y = find_set(v);
          if(x==y){
              cycle =true;
          }
          else{
              union_set(u,v);
          }
      }
      if(cycle)
      cout << " cycle is founnd";
      else{
           cout << " not found";
      }

  }
}  