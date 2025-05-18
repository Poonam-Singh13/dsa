#include<iostream>
using namespace std;
int occur(int arr[],int i,int target){
    if(i==5){
        return -1;
    }
    if(arr[i]==target){
        cout<<"element found at idx : "<<i<<endl;
    }
    return occur(arr,i+1,target);
}
int main(){
    int arr[5]={1,2,2,2,3};
    cout<<occur(arr,0,2);
    return 0;


}