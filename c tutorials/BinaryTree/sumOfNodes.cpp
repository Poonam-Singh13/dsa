#include<iostream>
#include<vector>
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
int sumOfNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=sumOfNodes(root->left);
    int rightSum=sumOfNodes(root->right);

    int currSum=leftSum+rightSum+root->data;
    cout<<"sum = "<<currSum<<"\n";

    return currSum;
}

int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,2,-1,-1};
    Node*root=buildTree(nodes);
   // cout<<"root node = "<<root->data;
    cout<<sumOfNodes(root);

}