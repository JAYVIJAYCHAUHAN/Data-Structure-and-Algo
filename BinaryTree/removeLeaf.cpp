#include<bits/stdc++.h>
using namespace std;
 class bin{
     public:
     int data;
     bin* left;
     bin* right;
     bin(int data){
         this->data = data;
          left = NULL;
          right = NULL;
     }
 };
  removeLeaf(bin*root,int x){
     if(root==NULL)return NULL;
     root->left=removeLeaf(root->left);
      root->right=removeLeaf(root->right);
      if(root->data==x && root->left==NULL&& root->right==NULL){
        delete(root);
        return NULL;
      }
      return root;
 }
 int printNode(bin*root){
     if(root == NULL)return 0;
     cout << root->data << endl;
     printNode(root->left);
     printNode(root->right);
 }
 int main(){
     bin*root = new bin(1);
     root->left = new bin(2);
     root->right = new bin(3);
     root->left->right= new bin(4);
     root->right->left=new bin(5);
     root->right->left->left=new bin(6);
  cout << "the tree is " << endl;
  printNode(root);
  cout << "remove leaf" << endl;
   cout << removeLeaf(root,4);
   
 }