#include<bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n<=1){
        return n;
    }
    int a=fibbo(n-1);
    int b=fibbo(n-2);
    return a+b;

}
int helper(int n, int *ans){
    if(n<=1){
        return n;

    }
    if(ans[n]!=-1){
        return ans[n];
    }
    int c=helper(n-1,ans);
    int d= helper(n-2,ans);
     ans[n]=c+d;
    return ans[n];
}
int fibbo_2(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return helper(n,ans);
}
int fibbo_3(int n){
    if(n<=1){
        return n;
    }
    int ans[n];
    ans[0]=0;
    ans[1]=1;
    for(int i =2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
 int main(){
    int n; 
    cout << "enter the number" << endl;
    cin>>n;
   cout << fibbo_3(n) << endl;
   return 0;
 }