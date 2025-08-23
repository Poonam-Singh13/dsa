#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Heap{
    vector<int>vec;
    
    void heapify(int i)
    {   
        if(i>=vec.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;
        int minI=i;
        if(l<vec.size()&& vec[i]<vec[minI]){
           minI=l;
        }
        if(r<vec.size()&& vec[r]<vec[minI]){
           minI=r;
        }
        swap(vec[i],vec[minI]);
        if(minI!=i){
            heapify(minI);
        }

    }

    public:
    void push(int val){
        vec.push_back(val); //1 step
        int x=vec.size()-1;//child node
        int parI=(x-1)/2;
        while(parI>=0 && vec[parI]>vec[x]){
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
    void pop(){
        swap(vec[0],vec[vec.size()-1]); // 1st step
        vec.pop_back();   //delete the last node
        heapify(0);
    }
};
int main(){
    Heap heap;
    heap.push(100);
    heap.push(40);
    heap.push(60);
   
    cout<<heap.top()<<endl;
   while(!heap.empty()){
    cout<<heap.top()<<endl;
    heap.pop();

   }
      
    

}