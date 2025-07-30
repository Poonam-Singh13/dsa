#include<iostream>
#include<vector>
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
void printPath(vector<int>path){
    cout<<"path : ";
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void rootToLeafPath(Node*root,vector<int>&path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    if(root->left==NULL && root->right==NULL){
        printPath(path);
        path.pop_back();
        return ;
    }
    rootToLeafPath(root->left,path);
    rootToLeafPath(root->right,path);
    path.pop_back();
}



int main(){

    int arr[6]={5,1,3,4,2,7};
    Node*root=buildBST(arr,6);
    vector<int>path;
    rootToLeafPath(root,path);
   

}