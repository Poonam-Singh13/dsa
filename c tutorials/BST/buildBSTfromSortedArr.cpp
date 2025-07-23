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
    void preorder(Node*root){
        if(root==NULL){
            return ;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inOrder(Node*root){
    if(root==NULL){
        return ;
    }    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    }
   
    Node* bulidBSTfromSortedArr(int arr[],int st,int end){
        if(st>end){
            return NULL;
        }
        int mid=st+(end-st)/2;
        Node*curr=new Node(arr[mid]);
        curr->left=bulidBSTfromSortedArr(arr,st,mid-1);
        curr->right=bulidBSTfromSortedArr(arr,mid+1,end);
        return curr;
    }
    





int main(){

    int arr[]={3,4,5,6,7,8,9};
    Node*root=bulidBSTfromSortedArr(arr,0,6);
    preorder(root);
    return 0;
   

}