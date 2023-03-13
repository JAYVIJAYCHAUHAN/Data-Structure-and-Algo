#include<bits/stdc++.h>
using namespace std; 
template<typename t>
 class graph{
      map<t,list<pair<t,int>>>m;
          public:
        void add(t u ,t v,int dist,bool b= true){
            m[u].push_back(make_pair(v,dist));
            if(b){
                m[v].push_back(make_pair(u,dist));
            }
        }
        void print(){
            for(auto j:m){
                cout << j.first<<"->";
                for(auto l:j.second){
                    cout << "(" << l.first << " , " << l.second << " ) ";
                }
                cout << endl;
            }
        }
 };
 int main(){
    graph<string>india;
    india.add("kharka","basti",1);
    india.add("basti","up",3);
    india.add("noida","up",32);
    india.add("sant kabir nager","hp",2);
    india.print();
 }