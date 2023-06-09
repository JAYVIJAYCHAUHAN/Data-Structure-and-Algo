#include<bits/stdc++.h>
using namespace std;
 class Graph{
    int v;
    list<int>*l;
    public:
    Graph(int v){
        v=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v,bool bidre=true){
        l[u].push_back(v);
         if(bidre){
            l[v].push_back(u);
         }
    }
    void print(){
        for(int i =0;i<v;i++){
            cout << i << "->";
            for(int vertex:l[i]){
                cout << vertex<<" ";
            }
            cout << endl;
        }
    }
 };
 int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.print();
     return 0;
 }