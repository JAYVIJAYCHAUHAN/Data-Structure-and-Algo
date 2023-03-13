#include<iostream>
using namespace std;
  long long int findFact(long long  int n){
    return n==1?1:n*findFact(n-1);

 }
  long long int findNpR(long long int n,long long int r){
    return findFact(n)/findFact(n-r);
 }
long long  int findNcR(long long int n,long long int r){
    return findFact(n)/(findFact(r)*findFact(n-r));
 }
  int main(){
   long long  int n,r,NcR,NpR;
    cout << "enter value of n"<<endl;
    cin>>n;
    cout << "enter value of r" <<endl;
    cin>>r;
    NcR=findNcR(n,r);
    NpR=findNpR(n,r);
    cout << "the combination is " << NcR <<endl;
    cout << "the permutation is " << NpR<<endl;
    return 0;
  }