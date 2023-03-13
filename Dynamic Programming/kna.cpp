#include<bits/stdc++.h>
using namespace std;
  
 
 int knapsack(int w,int we[],int va[],int n){
    if(n==0||w==0)
     return 0;
   
     if(we[n-1]>w)
         return knapsack(w,we,va,n-1);
     
     else
        return max(va[n-1]+knapsack(w-we[n-1],we,va,n-1),knapsack(w,we,va,n-1));
     
 }
 

 int main(){
    int we[]={60,100,120};
    int va[]={10,20,30};
    int w=50;
    int n =sizeof(va)/sizeof(va[0]);
    cout << knapsack(w,we,va,n) << endl;
    return 0;
 }