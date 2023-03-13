#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int h,int mid,int r){
    int n1=mid-h+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[h+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[ mid+h+i];
    }
int i=0;
int j=0;
int k=1;
while (i<n1&&j<n2 )
{
 if(a[i]<b[j]){
     arr[k]=a[i];
     k++,i++;
 } 
 else{
     arr[k]=b[j];
     k++,j++;
 }  
}
while (i<n1)
{
arr[k]=b[j];
k++,i++;
}
while(j<n2){
    arr[k]=b[j];
    k++,j++;

}
}
void merge(int arr[],int h,int r){
    if(h<r){
        int mid=(h+r)/2;
        merge(arr,h,mid);
        merge(arr,mid+1,r);
        merge(arr,h,mid,r);
    }
}
int main(){
    int arr[]={2,5,4,8,9};
    merge(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}