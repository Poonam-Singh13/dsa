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
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftHT=height(root->left);
    int rightHT=height(root->right);
    int currHT=(max(leftHT,rightHT)+1);

    return currHT;
}
int diameter1(Node*root){
    if(root==NULL){
        return 0;
    }
    int currDia=height(root->left)+height(root->right)+1;
    int leftDia=diameter1(root->left);
    int rightDia=diameter1(root->right);

    return max(currDia,max(leftDia,rightDia));
}

int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,2,-1,-1};
    Node*root=buildTree(nodes);
   // cout<<"root node = "<<root->data;
    cout<<diameter1(root);

}