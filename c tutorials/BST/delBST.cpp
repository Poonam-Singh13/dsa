#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }

};
void inOrder(Node*root){
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* insert(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

Node* buildBST(int arr[],int n){

    Node*root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}
Node*inOrderSuccesor(Node*root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* delNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
     if(val<root->data){
        root->left=delNode(root->left,val);
    }else if(val>root->data){
        root->right=delNode(root->right,val);
    }else{
        // 0 child -------- leaf Node;
        if(root->left==NULL &&root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child only
         if(root->left==NULL || root->right==NULL){
            return root->left==NULL?root->right:root->left;
        }
        // both child -------- inorder successor 
        Node* IS=inOrderSuccesor(root->right);
        root->data=IS->data;
        root->right=delNode(root->right,IS->data);
        return root;
    }
    return root;
}


int main(){

  //  int arr[6]={5,1,3,4,2,7};
    int arr[9]={8,5,3,1,4,6,10,11,14};
    Node* root=buildBST(arr,9);
   // inOrder(root);
    // delNode(root,4);
    // cout<<endl;
    // inOrder(root);
    // cout<<endl;
    delNode(root,8);
    cout<<endl;
    inOrder(root);   
   

}