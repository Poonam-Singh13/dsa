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
    Node* head;
    Node* tail;
public:
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
    void push_front(int val){  /// pushfront in linked list
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){    /// pushback in linked list
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void insert(int val,int pos){    //insert in Linked list
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"pos is invalid \n";
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void pop_front(){          // delete element from the front
        Node* temp=head;
        if(head==NULL){
        cout<<"ll is empty \n";
        }else{
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back(){        // delete element from the back
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;


    }
    int searchItr(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    int helper(Node* temp,int key){
       
       if(temp==NULL){
        return -1;
       }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1;
        }
        return  idx+1;

    }
    int searchRec(int key){
        return helper(head,key);
    }
    void reverse(){             // reverse a linked list
        Node* curr=head;
        Node* prev=NULL;
        //tail=head;
        while(curr !=NULL){
            Node* next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;

    }
    int getsize(){
        int sz=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }return sz;
    }
    void removeNth(int n){
        Node* prev=head;
        int size=getsize();
        for(int i=1;i<(size-n);i++){
            prev=prev->next;
        }
        Node* toDel=prev->next;
        cout<<"to del "<<toDel->data<<endl;
        prev->next=prev->next->next;
    }

    
    void printList(){ //TC=O(n)
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        
         }cout<<"NULL \n";
    }

};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
   // ll.insert(100,25);
   // ll.pop_front();
    //ll.pop_back();
   // cout<<ll.searchItr(50)<<endl;
    ll.printList();
   // ll.reverse();
    ll.removeNth(2);
    //cout<<ll.searchRec(4)<<endl;
    ll.printList();

}