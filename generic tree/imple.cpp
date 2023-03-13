#include<bits/stdc++.h>
using namespace std;
template<typename T>
class treeNode{
    public:
    int data;
    vector<treeNode<T>*>child;
    treeNode(int data){
        this->data=data;
    }
};
treeNode<int>*takeInput(){
    int rootData;
    cout << "enter root" << endl;
    cin>>rootData;
    treeNode<int>*root = new treeNode<int>(rootData);
 int n;
 cout << "enter Number of child" << rootData<<endl;
 cin>>n;
 for(int i = 0; i<n;i++){

      treeNode<int>*children =takeInput();
     root->child.push_back(children);
 }
 return root;
}
void printNode(treeNode<int>* root){
    if(root==NULL){
        return ;
    }
    cout << root->data << " ";
    for(int i =0; i<root->child.size();i++){
        cout << root->child[i]->data << " ";
    }
    cout << endl;
    for(int i  = 0; i<root->child.size();i++){
        cout << root->child[i] <<  ","<< endl;
    }
}
void countNum(treeNode<int>*root,int x){
    if(root==NULL){
        return ;
    }
    int count=0;
    if(root->data>x){
        ++count;
    }
    for(int i =0; i<root->child.size();++i){
        return countNum(root->child[i],x);
    }
    return count;
}

int main(){
    /*treeNode<int>*root = new treeNode<int>(1);
    treeNode<int>*node1 = new treeNode<int>(2);
    treeNode<int>*node2  = new treeNode<int>(3);

    root->child.push_back(node1);
    root->child.push_back(node2);*/
   treeNode<int>*root=takeInput();
printNode(root);
cout << "total greater element is:" << endl;
countNum(root);
    return 0;

}