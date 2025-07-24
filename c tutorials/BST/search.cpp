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
// void inOrder(Node*root){
//     if(root==NULL){
//         return ;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

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
  //  inOrder(root);
    
    return root;
}

bool search(Node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
   
}


int main(){

    int arr[6]={5,1,3,4,2,7};
    Node* root=buildBST(arr,6);
    cout<<search(root,0)<<endl;
   

}