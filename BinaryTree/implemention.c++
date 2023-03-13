#include<bits/stdc++.h>
using namespace std;

 struct node{
    int data;
     struct node*left;
     struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 
void preOrderTravarsal(struct node*root){
    if(root){
        cout << root->data << endl;
        preOrderTravarsal(root->left);
        preOrderTravarsal(root->right);

    }
}
void countNode(struct node*root){
     if(root==NULL)return ;
    
    return 1+ countNode(root->left)+countNode(root->right);

}
int main(){
   struct  node*root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left= new node(4);
   root->right->right= new node(5);
    
  // cout<<root->data<<endl;
   //cout<<root->left->data<<endl;
   //cout<<root->right->right->data<<endl;
    //countNode(root);
    preOrderTravarsal(root);
   cout<< "total node is ";
    countNode(root);
   return 0;

}