#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int idx=-1;

Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node*currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}
int kthAncestor(Node*root,int node,int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==node){
        return 0;
    }
    int leftDist=kthAncestor(root->left,node,k);
    int rightDist=kthAncestor(root->right,node,k);

    if(leftDist==-1 && rightDist==-1){
        return -1;
    }
    int validval=leftDist==-1?rightDist :leftDist;
    if(validval+1==k){
        cout<<"kth anscestor :"<<root->data;
    }
    return validval+1;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,4,-1,-1,6,-1,-1};
    Node*root=buildTree(nodes);
    int node=6,k=2;
    kthAncestor(root,node,k);

}