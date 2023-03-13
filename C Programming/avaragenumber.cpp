#include<bits/stdc++.h>
using namespace std;
int avg_number(int a, int b){

       return (a/2)+(b/2)+((a/2+b/2));
}
 int main(){
     int a=INT_MAX, b=INT_MAX;
     cout<< " actual avarage number:"<< INT_MAX<<endl;

     cout<<"  computed avarage number"<< avg_number(a,b)<<endl;

     return 0;

 }