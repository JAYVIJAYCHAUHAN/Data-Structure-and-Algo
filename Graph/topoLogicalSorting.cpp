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
void dfsHelper(t node, map<t,bool>&visited,list<t>&ordering){
    visited[node]=true;
    for(t neigh:adj[node]){
        if(!visited[neigh]){
            dfsHelper(neigh,visited,ordering);
        }
    }
          ordering.push_front(node);
}
     
    void dfsTopo(){
        map<t,bool>visited;
        list<t>ordering;
        for(auto i :adj){
            // i is pair (node,list of nodes)
            t node=i.first;
            if(!visited[node]){
                dfsHelper(node,visited,ordering);
            }
        }
       //print all the element of topological manner
       for(t element:ordering){
        cout << element << "->";
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
            s.dfsTopo();   
                return 0;
   }