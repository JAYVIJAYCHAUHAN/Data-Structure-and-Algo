#include<bits/stdc++.h>
using  namespace std;
 int main(){
     int n,m;
     int i, j;
    cout << "enter the number of n1:";
     cin>>n;
     int arr1[n];
     for(i = 0 ; i<n; i++){
         cin>>arr1[i];
     }
      cout << "enter the number of m1";
     cin>>m;
     int arr2[m];
     for( j= 0; j<m; j++){
         cin>>arr2[j];
     }

     for(i = 0; i<n; i++){
         for(j=0; j<m; j++){
             if(arr1[i]==arr2[j]){
             cout << arr1[i] << " ";
             }
         }
     }
     return 0;
 }