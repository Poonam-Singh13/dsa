#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node*next;

    Node(string key,int val){
        this->key=key;
        this->val=val;
        next=NULL;
    }

};
class HashTable{
public:
    int totalSize;
    int currSize;
    Node**table;

    HashTable(int size){

        totalSize=size;
        currSize=0;
        table=new Node*[totalSize];

        for(int i=0;i<totalSize;i++){
            table[i]=NULL;  
        }
    }
    int hashFunction(string key){
        int idx=0;
        for(int i=0;i<key.size();i++){
            idx=idx+(key[i]*key[i])%totalSize;
        }
        return idx;
    }
    void rehash(){
        Node**oldTable=table;
        int oldSize=totalSize;

        totalSize=2*totalSize;

        table=new Node*[totalSize];

        for(int i=0;i<totalSize;i++){
            table[i]=NULL;
        }
        for(int i=0;i<oldSize;i++){
            Node*temp=oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->val);
                temp=temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
            delete oldTable[i];
        }
    }
    void insert(string key,int val){
        int idx=hashFunction(key);
        Node* newNode=new Node(key,val);
        Node*head=table[idx];

        newNode->next=head;
        head=newNode;

        currSize++;
        
        double lambda=currSize/(double)totalSize;
        if(lambda>1){
            rehash();
        }
    }
    bool exist(string key){
        int idx=hashFunction(key);
        Node*temp=table[idx];
        while(temp->key==key){
          return true;
        }
          temp=temp->next;
          return false;
    }
    int insert(string key){
        int idx=hashFunction(key);
        Node*temp=table[idx];
        while(temp->key==key){
          return temp->val;
        }
          temp=temp->next;
          return -1;

    }
};
int main(){

}