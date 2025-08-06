#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endOfWord;
    int freq;
    Node(){
        endOfWord=false;
    }
};
class Tries{
    Node*root;
    public:
    Tries(){
        root=new Node();
        root->freq=-1;
    }
    void insert(string key){
        Node*temp=root;
        for(int i=0;i<key.size();i++){
            if(temp->children[key[i]]==NULL){
                temp->children[key[i]]=new Node();
                temp->children[key[i]]->freq=1;
            }else{
                temp->children[key[i]]->freq++;
            }
            temp=temp->children[key[i]];
        }
        temp->endOfWord=true;
    }
    string getprefix(string key){
        Node*temp=root;
        string prefix="";
        for(int i=0;i<key.size();i++){
            prefix+=key[i];
            if(temp->children[key[i]]->freq==1){
                return prefix;
            }
            temp=temp->children[key[i]];
        }
        return prefix;
    }

     void prefixProblem(vector<string>& dict) {
        for (string word : dict) {
            insert(word);
        }
        for (string word : dict) {
            cout << getprefix(word) << endl;
        }
    }

  
};

int main(){
    vector<string>dict={"i","like","sam","samsung","mobile","ice"};
   Tries tries;
tries.prefixProblem(dict);
}