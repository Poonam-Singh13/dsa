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
Node* LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 ||root->data==n2){
        return root;
    }
    Node* leftLCA=LCA2(root->left,n1,n2);
    Node* rightLCA=LCA2(root->right,n1,n2);

    if(leftLCA !=NULL && rightLCA!=NULL){
        return root;
    }
    return leftLCA==NULL ?rightLCA:leftLCA;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,4,-1,-1,6,-1,-1};
    Node*root=buildTree(nodes);
    Node* lca=LCA2(root,4,6);
   cout<<lca->data;

}