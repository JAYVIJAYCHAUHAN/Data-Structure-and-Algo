#include<bits/stdc++.h>
using namespace std;
int numBT(int n){
    if(n<=1){
        return 1;
    }
    int x=numBT(n-1);
    int y=numBT(n-2);
    int ans=x*x + 2*x*y;
    return ans;
}
 int main(){
    int n;
    cin>>n;

    cout << numBT(n)<< endl;
    return 0;
 }