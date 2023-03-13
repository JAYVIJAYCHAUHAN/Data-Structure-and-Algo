#include<bits/stdc++.h>
using namespace std; 
struct Node{
    int data;
    Node *left;
    Node *right;

  Node(int val){
      data =val;
      left =NULL;
      right = NULL;
  }  
};
Node*insetBst(Node*root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root ->left=insetBst(root->left,val);

    }
    if(val>root->data){
        root->right= insetBst(root->right,val);
    }
    return root;

}
//for searching the element of the bst
 
void inorder(Node *root){
    if(root==NULL){
        return ;
    }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
     
}
void leaf(Node*root){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        cout << root->data ;
    }
    leaf(root->left);
    leaf(root->right);
}
 void preorder(Node*root){
    if(root==NULL){
        return ;
    }
      
     
   cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
     
}
void postorder(Node*root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
   

int main(){
    Node*root = NULL;
    root =insetBst(root,1);
     insetBst(root,2);
     insetBst(root,3);

     insetBst(root,4);
    insetBst(root,5);
    insetBst(root,6);
    cout << "inorder traversal is:"<<endl;
inorder(root);
 cout << endl;
 cout << "preorder traversal is \n:"<<endl;
 preorder(root);
 cout << endl;
 cout << "postorder traversal is \n:" << endl;
 postorder(root);
 cout << endl;

 cout << "leaf node the bst tree is :";
   leaf(root);
   cout << endl;
   cout << endl;

  
return 0;
}