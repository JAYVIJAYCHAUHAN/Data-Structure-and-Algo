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
Node*min(Node*root){
    Node* curr= root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
Node *deletBST(struct Node *root,int key){
    if(root ==NULL){
        return root;
    }
    if(key>root->data){
        root->right=deletBST(root->right,key);
    }
     else if(key<root->data){
        root->left=deletBST(root->left,key);
    }
    else if(root->left==NULL && root->right==NULL){
        return NULL;
    }
    else if(root->left==NULL){
        struct Node *temp = root->right;
        free (root);
        return temp;
    }
    else if(root->right==NULL){
        struct Node *temp=root->left;
        free(root);
        return temp;
    }
    struct Node *temp=min(root->right);
    root->data=temp->data;
    root->right=deletBST(root->right,temp->data);


    
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
int main(){
    Node*root = NULL;
    root =insetBst(root,5);
     insetBst(root,1);
     insetBst(root,3);

     insetBst(root,4);
    insetBst(root,2);
    insetBst(root,7);
    cout << "the inseted element is"<<endl;
inorder(root);
 cout << endl;
 root =deletBST(root,2);
 inorder(root);
 cout << endl;
 return 0;
}