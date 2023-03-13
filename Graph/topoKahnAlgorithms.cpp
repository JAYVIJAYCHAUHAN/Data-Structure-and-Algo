// topological sort using bfs kahn algorithms
// uses  a modified bfs
// a queue and array /map for stroring indgree of each vertex is used
// algorithms starts from finding vertices with 0 indgree
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
    void topoLogicalSort(){
        queue<t>q;
        map<int,bool>visited;
        map<t,int>indegree;
        for(auto i :adj){
            // i is the pair of node and its list
            t node = i.first;
            visited[node]=false;
            indegree[node]=0;
        }
        //init the indegree of all nodes
        for(auto i :adj){
            t u=i.first;
            for(t v:adj[u]){
                indegree[v]++;
            }
        }
        //find all node with o indegree
        for(auto i:adj){
            t node=i.first;
            if(indegree[node]==0){
                q.push(node);
            }
        }
        // start with algorithms
        while(!q.empty()){
            t node =q.front();
            q.pop();
            cout << node << "-->";
            for(t neigh:adj[node]){
              indegree[node]--;
              if(indegree[neigh]==0){
                q.push(neigh);
              }  
            }
        } 
    }
};
int main(){
            graph<string>s;
           s.add("english","program",false);
           s.add("maths","program",false);
           s.add("program","html",false);
           s.add("program","python",false);
           s.add("program","java",false);
           s.add("program","js",false);
           s.add("program","web",false);
           s.add("html","css",false);
           s.add("css","js",false);
           s.add("js","web",false);
            s.add("java","web",false);
            s.add("python","web",false);
                 s.topoLogicalSort();
        return 0;    

}