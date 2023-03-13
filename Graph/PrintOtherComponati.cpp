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
    
    void dfsHelper(t node1,map<t,bool> &visited){
        visited[node1]=true;
        cout << node1 << " ";
        for(t neigh:adj[node1]){
            if(!visited[neigh]){
            dfsHelper(neigh,visited);
            }
        }
    }
    void dfs(t src){
        map<t,bool>visited;
        int compo=1;
        dfsHelper(src,visited);
        cout << endl;
        for(auto i:adj){
            t city=i.first;
            if(!visited[city]){
                dfsHelper(city,visited);
                compo++;
            }
        }
        cout << " the current graph "<<compo << " ";
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
               s.add(7,8);
               s.add(234,21);
    
               s.dfs(0);
                return 0;
   }