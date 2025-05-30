#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        //tail=head;
        while(curr !=NULL){
            Node* next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev;

    }
     Node* splitAtMid(Node*head){
         if (head == NULL || head->next == NULL) return head;

        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;

        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        return slow;
    }
    Node* zigZag(Node*head){
        Node* rightHead=splitAtMid(head);
        Node* rightHeadRev=reverse(rightHead);

        Node* left=head;
        Node* right=rightHeadRev;
        Node* tail=right;

        while(left!=NULL && right!=NULL){

            Node*rightNext=right->next;
            Node*leftNext=left->next;

            left->next=right;
            right->next=leftNext;

            tail=right;
            right=rightNext;
            left=leftNext;
        }
        if(right!=NULL){
            tail->next=right;
        }
        return head;
    }
    void printList( Node* head){ //TC=O(n)
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        
         }cout<<"NULL \n";
        } 
};
int main(){
    List ll;
    //ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.printList(ll.head);
    ll.zigZag(ll.head);
    ll.printList(ll.head);
}