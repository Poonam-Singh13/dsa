#include<iostream>
#include<vector>
using namespace std;

void heapify(int i,vector<int>&arr,int n){
    int l=2*i+1;
    int r=2*i+2;
    int maxI=i;
    
    while(l<n && arr[l]>arr[maxI]){  // /O(logn)
        maxI=l;
    }
     while(r<n && arr[r]>arr[maxI]){
        maxI=r;
    }

    if(maxI != i){
        swap(arr[i],arr[maxI]);
        heapify(maxI,arr,n);
    }
}

void heapSort(vector<int>&arr){

    //Building a max heap
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){    // O(n*logn)
        heapify(i,arr,n);
    }
    //for finding correct position
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }
}
int main(){

    vector<int>arr={1,5,4,2,3};
    heapSort(arr);


    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

}