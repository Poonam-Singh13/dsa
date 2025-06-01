#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

template<class T>
class Stack{
    list<T> ll;
    public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    T top(){
        return ll.front();
    }
    bool isEmpty(){
        return ll.size()==0;
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

