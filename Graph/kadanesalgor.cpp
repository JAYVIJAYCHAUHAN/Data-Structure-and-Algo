#include<bits/stdc++.h>
using namespace std;
 int main(){
    
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(a[0]);
    int csum=a[0];
    int osum=a[0];
    for(int i =1;i<n;i++){
          if(csum>=0){
            csum+=a[i];
          }
          else{
            csum=a[i];
          }
          if(csum>osum){
        osum=csum;
    }
    }
     
    cout << osum << endl;
    return 0;

 }