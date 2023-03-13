#include<bits/stdc++.h>
using namespace std;
  int vetA[20][20];
  int count =0;
  void displayMatrix(int v){
      int i,j;
       for( i = 0 ;i < v; i++){
           for( j = 0; j < v; j++){
               cout << vetA[i][j] << " ";

           }
           cout << endl;

       }
  }
  void add(int u,int v){
      vetA[u][v]=1;
      vetA[v][u]=1;

  }
  int main( int argc, char*argv[]){
      int v=6;
      add(0,4);
      add(0,3);
      add(1,2);
      add(1,4);
      add(1,5);
      add(2,3);
      add(2,5);
      add(5,3);
      add(5,4);
      displayMatrix(v);
  }