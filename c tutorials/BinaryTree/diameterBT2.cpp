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
pair<int,int> diameter2(Node*root){

    if(root==NULL){
        return make_pair(0,0);
    }

    pair<int,int>leftInfo=diameter2(root->left);
    pair<int,int>rightInfo=diameter2(root->right);
    //pair[height,dia]
    int currDiam=leftInfo.second+rightInfo.second+1;
    int finaldia=max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalHT=max(leftInfo.second,rightInfo.second)+1;

    return make_pair(finaldia,finalHT);
    
    
}

int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildTree(nodes);
   // cout<<"root node = "<<root->data;
    cout<<diameter2(root).second;

}