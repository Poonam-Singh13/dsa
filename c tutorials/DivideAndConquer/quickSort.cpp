#include<iostream>
using namespace std;
int partion(int arr[],int si,int ei){
    int i=si-1;
    int j=si;
    int pivot=arr[ei];
    for(j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);                //average TC=O(nlogn)
        }                                       //worst case TC=O(n^2)
    }                                          // SC=O(1)
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int pivotIdx= partion(arr,si,ei);
    mergeSort(arr,si,pivotIdx-1);
    mergeSort(arr,pivotIdx+1,ei);

}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    mergeSort(arr,0,n-1);
    printArr(arr,n);
}