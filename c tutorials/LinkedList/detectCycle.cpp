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
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }

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
    ~List(){
    
        if(head!=NULL){
            delete head;
            head=NULL; 
        }
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
    void pop_front(){
        Node* temp=head;
        if(head==NULL){
        cout<<"ll is empty \n";
        }else{
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    bool isCycle(Node* head){

        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                cout<<"cycle exist \n";
                return true;
            }
        }
         cout<<"cycle doesnt exist \n";
            return false;

    }
    void removeCycle(Node* head){
        Node*slow=head;
        Node* fast=head;
        bool isCycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                isCycle=true;
                cout<<"cycle exist \n";
                break;
            }
        }
        if(isCycle==false){
            return;
        }
            slow=head;
            Node*prev=fast;
            if(slow==head){
                while(fast->next!=NULL){
                    fast=fast->next;
                }
                fast->next=NULL;
            }else{
                while(slow!=fast){
                    slow=slow->next;
                    prev=fast;
                    fast=fast->next;
                }prev->next=NULL;
            }
        
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
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    if (ll.tail != NULL) {
        ll.tail->next = ll.head;
    }

    ll.removeCycle(ll.head); 
    ll.printList(ll.head);
}