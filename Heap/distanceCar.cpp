#include<bits/stdc++.h>
using namespace std;
 class car{
    public:
    int x;
    int y;
    int id;
    car(int id,int x, int y){
        this->id = id ;
        this->x = x;
         this->y = y;
    }
    int distance (){
        return x*x+y*y;
    }
    void print(){
        cout << "id" << id;
        cout << " lication," << x << "," << y << endl;
    }

 };
 // factor concept is used for  in this probelem;
 class compare{
public:
bool operator()(car a,car b){
    return a.distance()>b.distance();
}
 };
 int main(){
    priority_queue<car,vector<car>,compare>q;
   // priority_queue<int,vector<int>,greater<int>>q;
    int x[10] = { 12, 32, 32, 43, 4, 1, 2};
    int y[10] = { 12 ,32 ,45 ,8 ,3, 5,3};
    for(int i = 0; i<7;i++){
        car c(i,x[i],y[i]);
        q.push(c);
    }
    while(!q.empty()){
 car p =q.top();
 p.print();
 q.pop();
    }
    
    return 0;
 }