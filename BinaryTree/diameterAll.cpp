#include<bits/stdc++.h>
using namespace std;
template<typename T>
 class node{
     public:
     T data;
     node* left;
     node* right;
     node(int data){
         this ->data = data;
         left = NULL;
          right = NULL;

     }
     ~node(){
         delete left;
         delete right;
         
     }

 };
 node<int>* takeLevel(){
     int rootData;
     cout << "enter root data" << endl;
     cin>>rootData;
     if(rootData==-1){
         return NULL;
     }
     node<int>*root = new node<int>(rootData);
     queue<node<int>*>pendingData;
     pendingData.push(root);
     while(pendingData.size()!=0){
 node<int>*front = pendingData.front();
  pendingData.pop();
  cout << "enter left child" << front->data << endl;
  int leftChild;
  cin>>leftChild;
  if(leftChild!=-1){
      node<int>*child = new node<int>(leftChild);
      front->left=child;
      pendingData.push(child);
  }
  cout << "enter right child" << front->data << endl;
  int rightChild;
  cin>>rightChild;
  if(rightChild!=-1){
      node<int>*child = new node<int>(rightChild);
      front->right=child;
      pendingData.push(child);
     }
     }
     return root;
 }
 void printNode(node<int>*root){
     if(root==NULL){
         return  ;
     }
     cout << root->data <<":";
     if(root->left!=NULL){
         cout << "L" << root->left->data ;
     }
     cout << endl;
     if(root->right!=NULL){
         cout << "R" << root->right->data;
     }
     cout << endl;
     printNode(root->left);
     printNode(root->right);

 }
 int height(node<int>*root){
     if(root==NULL){
         return 0;
     }
     return   1+max(height(root->left),height(root->right));
 }
 bool isPresent(node<int>*root,int key){
     if(root==NULL){
         return 0;
     }
     return (isPresent(root->left,key),isPresent(root->right,key));
 }
  int countNode(node<int>*root){
      if(root == NULL){
          return 0;
      }
      return 1+countNode(root->left)+countNode(root->right);
  }
  int diameter(node<int>*root){
      if(root==NULL){
          return 0;
      }
      int op1=height(root->left) + height(root->right);
      int op2=diameter(root->left);
      int op3=diameter(root->right);
      return max(op1,max(op2,op3));
  }
 int main(){
     /*node<int>*root = new node<int>(1);
     node<int>*node1 = new node<int>(2);
     node<int>*node2= new node<int>(3);
     root->left = node1;
     root->right = node2;*/
     node<int>*root = takeLevel();
     printNode(root);
     cout << "height of tree:";
    cout <<  height(root) << endl;
  cout <<    isPresent(root,4)<<endl;
  cout << "no of node " << endl;
  cout << countNode(root) << endl;
  cout << "diameter of tree is" << endl;
  cout << diameter(root) << endl;
 }