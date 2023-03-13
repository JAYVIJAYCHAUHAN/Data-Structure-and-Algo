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
     
};
   int main(){
                graph<string>s;
                 s.add("putin","trum",false);
                 s.add("putin","modi",false);
                 s.add("putin","pope",false);
                 s.add("modi","trump",true);
                 s.add("modi","yoig",true);
                 s.add("yogi","jay",false);
                 s.add("jay","modi",false);
                 s.print();
                return 0;
   }