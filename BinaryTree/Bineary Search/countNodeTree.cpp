#include<bits/stdc++.h>
using namespace std;
 struct node{
     int data;
     node*right;
     node*left;
     node(int val){
         data=val;
         right=NULL;
         left=NULL;
     }

 };
 /*void inorder(node*root){
     if(root==NULL){
         return ;
     }
     inorder(root->left);
     cout << root->data<< " ";
   inorder(root->right);
 }*/
 int countNode(node*root){
     if(root==NULL)
         return 0 ;
     
      
     //return 1+countNode(root->left,root->right);
      return 1+countNode(root->left)+countNode(root->right);
     
    

 }

 int main(){
     struct node*root=new node(1);
     root->right=new node(2);
root->left=new node(3);
 root->right->right=new node(4);
     root->left->left=new node(5);
     
     cout << "\ntotal node in tree\n";
    cout << countNode(root);
 }

 