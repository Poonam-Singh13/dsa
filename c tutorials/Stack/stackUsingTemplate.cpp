#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class Stack{
    vector<T>vec;
    public:
    void push(T val){    //O(1)
        vec.push_back(val);
    }
    void pop(){   
        if(isEmpty()){      //O(1)
            cout<<"stack is empty \n";
        }      
        vec.pop_back();
    }
    T top(){          //O(1)
        //  if(isEmpty()){      //O(1)
        //     cout<<"stack is empty \n";
        //     return -1;
          
        int topIdx=vec.size()-1;
       return vec[topIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
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