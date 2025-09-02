#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void getUnion(vector<int>arr1,vector<int>arr2){
    unordered_set<int>s;
    for(int el:arr1){
        s.insert(el);
    }
    for(int el:arr2){
        s.insert(el);
    }
    for(int el:s){
        cout<<el<<" ";
    }
}
int main(){
    vector<int>arr1={1,2,3,4,5,5};
    vector<int>arr2={1,3,7,8,9,5};
    cout<<"union : ";
    getUnion(arr1,arr2);
}