#include<bits/stdc++.h>
using namespace std;
 class edge{
    public:
    int source;
    int dest;
     int weight;
 };
 bool campare(edge e1,edge e2){
    return e1.weight<e2.weight;
 }
 int findParent(int v,int*parent){
    if(parent[v]==v){
        return v;
    }
 }
 void kruskal(edge*input,int n ,int E){
    sort(input,input+E,campare);
    edge *output=new edge[n-1];
    int *parent=new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int count=0;
    int i=0;
    while(count!=n-1){
        edge currEdge=input[i];
        //check if we can add the currentedge in m
        //mst or not
        int sourParent=findParent(currEdge.source,parent);
    int destParent=findParent(currEdge.dest,parent);

     if(sourParent !=destParent){
        output[count] =currEdge;
        count++;
     }
     i++;
    }
    for(int i =0;i<n-1;i++){
        if(output[i].source<output[i].dest){
            cout << output[i].source << " "<<output[i].dest<<" "
            <<output[i].weight << endl;
        }
        else{
       cout << output[i].dest << " "<<output[i].source<<" "
            <<output[i].weight << endl ;     
        }
    }
    
 }

 int main(){
    int n, E;
    cin>>n>>E;
    edge *input=new edge[E];
    for(int i =0;i<E;i++){
        int s,d,w;
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    kruskal(edge , n , E);
 }