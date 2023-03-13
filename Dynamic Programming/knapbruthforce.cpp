#include<bits/stdc++.h>
using namespace std;
 int  knapsack(int*weight,int *value,int maxw,int n){
    if(n==0 ||maxw==0)
    return 0;
    if(weight[0]>maxw){
        return 
        knapsack(weight+1,value+1,n-1,maxw);
    }
    int x =knapsack(weight+1,value+1,n-1,maxw-weight[0])+value[0];
    int y = knapsack(weight+1,value+1,n-1,maxw);
    return max(x,y);
 }
 int main(){
    int n;
    int weight[]={5,1,8,9,2};
    int maxw=15;
    int value[]={4,10,2,3,1};
    cout << knapsack(weight,value,5,maxw);
    return 0;
 }