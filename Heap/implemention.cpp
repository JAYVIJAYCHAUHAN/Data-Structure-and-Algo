#include<bits/stdc++.h>
using namespace std;
 class heap{
    vector<int>v;
    bool minHeap;
    bool compare(int a, int b){
        if(minHeap){
            return a<b;
        }
        else{
            a>b;
        }
    }
    public:
    heap(bool type=false){
        minHeap=type;
        v.push_back(-1);
    }
    void push(int data){
        v.push_back(data);
        int index=v.size()-1;
        int parent=index/2;
        while(index>1 && compare(v[index],v[parent])  ){
            swap(v[index],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }
    bool empty(){
        return v.size()==1;
    }
    int top(){
  return v[1];
    }
 };
 int main(){
heap h;
h.push(3);
h.push(4);
h.push(8);
cout << h.top() << endl;
 
 }