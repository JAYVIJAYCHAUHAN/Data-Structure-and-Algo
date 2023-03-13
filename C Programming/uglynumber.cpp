#include<bits/stdc++.h>
using namespace std;
int uglynumber(int n){
    //base case
    if(n==1)
     return 1;
if(n<=0)
return 0;
if(n%2==0){
    return (uglynumber(n/ 2));

}
if(n%3==0){
    return (uglynumber(n / 3));

}
if ( n%5 == 0){
    return (uglynumber( n /5));

}
return 0;
}
int main(){
    int number=uglynumber(12);
    if(number==1){
        cout<<"yes"<<endl;
    }
    else
    cout<<" no " <<endl;
    return 0;
}
