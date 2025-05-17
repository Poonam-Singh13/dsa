#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int l,int r,int key){
    int mid=l+r/2;
    bool flag=false;
    while(l<=r){
        if(arr[mid]==key){
            cout<<"element found at inx :"<<mid<<endl;
            flag=true;
            return mid;
        }else if(arr[mid]>key){
            return binarySearch(arr,n,l,mid-1,key);
        }else{
           return  binarySearch(arr,n,mid+1,r,key);
        }
    }
    if(flag==false){
            return -1;
        }
   
}
int main(){
    int arr[5]={1,2,3,4,5};
    int l=0;
    int r=4;
   cout<< binarySearch(arr,5,l,r,20);
    return 0;

}
