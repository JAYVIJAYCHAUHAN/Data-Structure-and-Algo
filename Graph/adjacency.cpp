#include<bits/stdc++.h>
using namespace std ;
 void adjacecy(int v,int u){
     int vec[20][20];
     int n,m;
     cin>>n>>m;
     for(int i = 0; i< n; i++){
         for(int j =0; j<m;j++){
      int x,y;
      cin>>x>>y;
      vec[x][y]=1;
      vec[y][x]=1;
      cout << vec[i][j]<< endl;
         }
     }
 }
  