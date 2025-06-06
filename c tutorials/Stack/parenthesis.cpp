#include<iostream>
#include<string>
#include<stack>
using  namespace std;
bool isValid(string str){   /// t(c)=O(n)
                           /// s(c)=O(n)
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }else{
            if(s.empty()){
                return false;
            }
            int top1=s.top();
            if(top1=='('&& ch==')'||top1=='{'&&ch=='}'||top1=='['&& ch==']'){
                s.pop();
            }else{
                return false;
            }
        }
    }return s.empty();
}
int main(){
    string str="{()}[";
    string str1="{{[()]}}";
    cout<<isValid(str)<<endl;
    cout<<isValid(str1);
}