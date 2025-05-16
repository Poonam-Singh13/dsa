#include<iostream>
using namespace std;
bool isArraySorted(int *arr,int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isArraySorted(arr,n,i+1);
}
int main(){
    int arr1[5]={1,2,3,4,5};
     int arr2[5]={1,2,4,3,5};
     cout<<isArraySorted(arr1,5,0)<<endl;//sorted :1
     cout<<isArraySorted(arr2,5,0);//sorted :0
     return 0;
    


}