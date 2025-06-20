#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    public:
    stack<int>s1;
    stack<int>s2;
    void push(int data){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        s1.pop();
    }
    int front(){
        return s1.top();
    }
    bool isEmpty(){
        return s1.empty();
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.isEmpty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;

}