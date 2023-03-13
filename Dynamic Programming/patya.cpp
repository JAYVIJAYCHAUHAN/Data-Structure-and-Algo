#include<bits/stdc++.h>
using namespace std;
 int main(){
   string s;
   cin>>s;
   string p;
   cin>>p;
   for(int i =0;i<s.size();i++){
    if(s[i]<92){
        s[i]+=32;
    }
    if(p[i]<92){
        p[i]+=32;
    }

   }
   if(s<p){
    cout << -1;
   }
   if(p<s){
    cout << 1;

   }
   if(s==p){
    cout << 0;
   }
   return 0;
 }
