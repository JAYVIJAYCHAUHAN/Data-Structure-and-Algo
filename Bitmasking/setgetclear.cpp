#include<iostream>
using namespace std; 
int getIbit(int n,int i){
    return   (n&(1<<i));

}
int setIbit(int n,int i){
    int mask=1<<i;
    n= (n |mask);
}
int clearIbit(int n,int i){
    int mask=~(1<<i);
    n=(n & mask);
}
int main(){
    
    cout << getIbit(13,1) << endl;
    cout << setIbit(13,1) << endl;
    cout << clearIbit(13,2)< endl;
     
    return 0;
}