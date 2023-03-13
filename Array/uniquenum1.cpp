#include<iostream>
using namespace std;
int unique_num(int arr[],int n){
      int restore=arr[0];
      for(int i=1;i<n;i++){
          restore=restore^arr[i];

      }
      return restore;
}

int main(){
    int arr[]={2,3,4,5,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << unique_num(arr,n) << endl;
    return 0;
}