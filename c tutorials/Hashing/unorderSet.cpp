#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    cout<<s.size()<<endl;

    if(s.find(2)!=s.end()){
        cout<<"num is present \n";
    }else{
        cout<<"num is not present \n";
    }

    s.erase(4);
    cout<<s.size()<<endl;
    for(auto el:s){
        cout<<el<<endl;
    }


}