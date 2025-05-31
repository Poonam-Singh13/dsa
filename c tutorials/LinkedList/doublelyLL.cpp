#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }   
};
class DoublyList{
    public:
    Node*head;
    Node* tail;
    DoublyList(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        Node*temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        Node*temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }cout<<"NULL\n";
    }

};
int main(){
    DoublyList dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.push_back(5);
    dbll.printList();
    dbll.pop_front();
    dbll.printList();
    dbll.pop_back();
    dbll.printList();
   
    // dbll.push_back(1);
    // dbll.push_back(2);
    // dbll.push_back(3);
    // dbll.push_back(4);
    // dbll.printList();
}