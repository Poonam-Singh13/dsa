#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node*newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
         if(isEmpty()){
            cout<<"queue is empty \n";
            return ;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int front(){
        if(isEmpty()){
            cout<<"queue is empty \n";
            return -1;
        }
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.isEmpty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
    return 0;
}