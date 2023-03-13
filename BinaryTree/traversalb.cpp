#include<bits/stdc++.h>
using namespace std;
 struct Node{
     int data;
     struct Node *left, *right;
 };
 Node *newNode(int data){
     Node *temp = new Node;
     temp->data= data;
     temp->left = temp->right =NULL;
     return temp;

 }
 void postOrder(struct Node*node){
     if(node == NULL){
         return ;
     }
     postOrder(node->left);
     postOrder(node->right);
     cout << node->data << " ";

 }
 void preOrder(struct Node*node){
     if(node == NULL){
         return ;
     }
     cout << node->data << endl;
     preOrder(node->left) ;
     preOrder(node->right);
      }
      void inOrder(struct Node*node){
          if(node == NULL){
              return ;
          }
          inOrder(node->left);
          cout << node->data << " "; 
          inOrder(node->right);
      }

      int main(){
          struct Node*root = newNode(1);
          root->left = newNode(2);
          root->right = newNode(3);
          root->left->left = newNode(4);
          root->right->right = newNode(5);
          cout << "\nPostorder travaersal is ";
          postOrder(root);
          cout << "\nPreorder traversal is ";
          preOrder(root);
          cout<< "\nInoerder traversal is ";
          inOrder(root);
          

      }