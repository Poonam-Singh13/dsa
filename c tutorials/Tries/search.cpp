#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endOfWord;
    Node(){
        endOfWord=false;
    }
};
class Tries{
    Node*root;
    public:
    Tries(){
        root=new Node();
    }
    void insert(string key){
        Node*temp=root;
        for(int i=0;i<key.size();i++){
            if(temp->children[key[i]]==NULL){
                temp->children[key[i]]=new Node();
            }
            temp=temp->children[key[i]];
        }
        temp->endOfWord=true;
    }
    bool search(string key){
        Node*temp=root;
        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])){
                temp=temp->children[key[i]];
            }else{
                return false;
            }
        }
        return temp->endOfWord;
    }
};
int main(){
    vector<string>words={"the","there","their","a","any","thee"};
    Tries tries;
    for(int i=0;i<words.size();i++){
        tries.insert(words[i]);
    }
    cout<<tries.search("poonam");
}