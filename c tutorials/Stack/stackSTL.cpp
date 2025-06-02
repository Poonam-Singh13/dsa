#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
  
    // stack<int> s;
    // s.push(3);
    // s.push(2);
    // s.push(1);
    // stack<char> s;
    // s.push('c');
    // s.push('b');
    // s.push('a');
    stack<string> s;
    s.push("Negi");
    s.push("Singh");
    s.push("Poonam");
    cout<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}