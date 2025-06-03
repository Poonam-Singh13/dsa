#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

template<class T>
class Node{
     public:
    T data;
    Node* next;
    Node(T val){
        data=val;
        next=NULL;
    }

};
template<class T>
class Stack{
   Node<T>* head;
    public:
    Stack(){
        head=NULL;
    }
    void push(T val){
       Node<T>* newNode=new Node<T>(val);
       if(head==NULL){
        head=newNode;
       }else{
        newNode->next=head;
        head=newNode;
       }
    }
    void pop(){
       Node<T>* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
    }
    T top(){
        return head->data;
    }
    bool isEmpty(){
        return head==0;
    }
};
int main(){
    // Stack<int> s;
    // s.push(3);
    // s.push(2);
    // s.push(1);
    // Stack<char> s;
    // s.push('c');
    // s.push('b');
    // s.push('a');
    Stack<string> s;
    s.push("Negi");
    s.push("Singh");
    s.push("Poonam");
    cout<<s.top()<<endl;

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

