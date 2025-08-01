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
    tries(){
        root=new Node();
    }
};
int main(){
    vector<string>word={"the","there","their","a","any","thee"};
     Tries tries;


}