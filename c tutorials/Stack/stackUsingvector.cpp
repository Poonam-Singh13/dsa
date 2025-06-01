#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int>vec;
    public:
    void push(int val){    //O(1)
        vec.push_back(val);
    }
    void pop(){   
        if(isEmpty()){      //O(1)
            cout<<"stack is empty \n";
        }      
        vec.pop_back();
    }
    int top(){          //O(1)
         if(isEmpty()){      //O(1)
            cout<<"stack is empty \n";
            return -1;
        }   
        int topIdx=vec.size()-1;
       return vec[topIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};
int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.top()<<endl;

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}