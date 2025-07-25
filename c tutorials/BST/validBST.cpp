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
bool helper(Node*root,Node*min,Node*max){
   
    if(root==NULL){
        return true;
    }
    else if(min!=NULL && root->data<min->data){
        return false;
    }
    else if(max!=NULL && root->data>max->data){
        return false;
    }
     return helper(root->left,min,root)
    && helper(root->right,root,max);
}
bool validateBST(Node*root){
    return helper(root,NULL,NULL);
}


int main(){

    // int arr[6]={5,1,3,4,2,7};
    // Node*root=buildBST(arr,6);
     int arr[9]={8,5,3,1,4,6,10,11,14};
     Node*root=buildBST(arr,9);
    cout<<validateBST(root);
    
   

}