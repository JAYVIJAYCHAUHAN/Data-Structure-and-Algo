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
void printlevel(node*root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        node*Node=q.front();
        q.pop();
        if(Node!=NULL){
            cout<<Node->data<<" ";
        
            if(Node->left){
                q.push(Node->left);
                if(Node->right){
                    q.push(Node->left);
                }
                else if (!q.empty())
                q.push(NULL);
            }
        }

    }
}
int main(){
   struct  node*root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left= new node(4);
   root->right->right= new node(5);
   //cout<<root->data<<endl;
   //cout<<root->left->data<<endl;
   //cout<<root->right->right->data<<endl;
   printlevel(root);
   return 0;

}