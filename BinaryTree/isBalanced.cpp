#include<bits/stdc++.h>
using namespace std;
 class bin{
     public:
     int data ;
     bin* left;
     bin* right;
     bin(int data){
         this->data = data;
         left = NULL;
         right = NULL;
     }
 };
 int printNode(bin*root){
     if(root == NULL)return 0;
     cout << root->data << endl;
     printNode(root->left);
     printNode(root->right);
 }
 int findSum(bin*root){
     if(root==NULL)return 0 ;
     int sum=0;
      sum+= root->data+findSum(root->left)+findSum(root->right);
      return sum;
 }
 int height(bin*root){
     if(root == NULL)return 0;
     return 1+max(height(root->left),height(root->right));
 }
 bool isBalanced(bin*root){
     if(root==NULL)return true;
     int a = height(root->left);
     int b = height(root->right);
     if(a && b <= 1){
         return true;
     }
     return false;
 }
  int subNodes(bin*root){
      if(root==NULL)return 0;
      if(root->left!=NULL && root->right!=NULL){ 
      subNodes(root->left);
      subNodes(root->right);
      }
     else if(root->left!=NULL){
      cout << root->left->data << endl;
      subNodes(root->left);
      }
     else if(root->right!=NULL){
      cout << root->right->data << endl;
      subNodes(root->right);
      }
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
  cout << "the sum of the tree" << endl;
   cout << findSum(root);
   cout << "is balanced tree"<< endl;
  cout << isBalanced(root);
  cout << "the no sublings nodes is"<<endl;
 cout << subNodes(root);
 }