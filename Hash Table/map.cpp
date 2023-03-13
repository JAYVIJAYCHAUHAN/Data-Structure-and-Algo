#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
 int main(){
    unordered_map<string,int>m;
    // for insertion
    m["mango"]=32;
    m["pea"]=321;
    // for search 
    if(m.count("pea")==1){
        cout << "pea exists in the market and price" << m["pea"] << endl;
    }
    if(m.count("mango")==0){
 cout << "mango dose not exits" << endl;
    }
    else {
        cout << "mango exits ";
    }
    //for deletion
    auto f = m.erase("mango");
    cout << "now mango is not exits" << (f) << endl;
    return 0;
 }