#include<bits/stdc++.h>
using namespace std;
template<typename t>
class graph{
    public:
    map<t,list<t>>adj;
    public:
    graph(){

    }
    void add(t u,t v,bool b=true){
        adj[u].push_back(v);
        if(b){
            adj[v].push_back(u);
        }
    }
    void print(){
        for(auto i:adj){
            cout << i.first << " ->";
       
        for( t j:i.second){
            cout << j <<",";
        }
        cout << endl;
        }
    }
    void bfs(t src){
        queue<t>q;
        map<t,bool>visited;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            t node = q.front();
            cout << node << " ";
            q.pop();
            for(int neigh:adj[node]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }
        }
      
    }
};
   int main(){
               graph<int>s;
               s.add(0,1);
               s.add(1,2);
               s.add(0,4);
               s.add(2,4);
               s.add(2,3);
               s.add(3,5);
               s.add(3,4);
               s.bfs(0);
                return 0;
   }