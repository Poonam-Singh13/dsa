#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s,int val){

    if(s.empty()){
        s.push(val);
        return;
    }

    int temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    pushAtBottom(s,4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}