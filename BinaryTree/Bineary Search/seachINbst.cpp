#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        right =NULL;
        left=NULL;
    }

};
Node *search(Node*root,int key){
    if(root ==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return search(root->left,key);

    }
    return search(root->right,key);

}

int main(){
    Node *root =new Node(4);
    root->right=new Node(5);
    root ->left = new Node(2);
    root->left->left=new Node(3);
    root->right->right=new Node(8);
    if(search(root,7)==NULL){
        cout << " not root exists in  tree";
    }
    else
    cout << " exists in the tree";
    return 0;
}