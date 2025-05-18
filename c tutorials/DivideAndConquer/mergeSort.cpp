#include<iostream>
#include<vector>
using namespace std;
int merge(int arr[],int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    vector<int>temp;                                 //   TC=O(nlog n)
                                                    //    SC+O(n)
    while(i<=mid&&j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]=temp[x++];
    }

}
int mergeSort(int arr[],int si,int ei){

    int mid=si+(ei-si)/2;
    if(si>=ei){
        return 0;
    }
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);

}
 void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
        cout<<endl;
    }
int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    printArr(arr,6);
    mergeSort(arr,0,n-1);
     printArr(arr,6);
}