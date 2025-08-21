#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Heap{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val); //1 step
        int x=vec.size()-1;//child node
        int parI=(x-1)/2;
        while(parI>=0 && vec[parI]<vec[x]){
            swap(vec[x],vec[parI]);
            x=parI;
            parI=(x-1)/2;            //T(C)=logn
        }
    }
    int top(){
        return vec[0];            // highest priority element
    }
    bool empty(){
        return vec.size()==0;
    }
};
int main(){
    Heap heap;
    heap.push(100);
    heap.push(40);
    heap.push(60);
   
     cout<<heap.top()<<endl;
      
    

}