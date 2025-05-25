#include<iostream>
#include<string>
using namespace std;
int gridWays(int r,int c,int n,int m,string str){
    if(r==n-1 && c==m-1){
        return 1;
    }
    if(r>=n || c>=m){
        return 0;
    }
    int val1=gridWays(r,c+1,n,m,str+"R");
    int val2=gridWays(r+1,c,n,m,str+"D");
    return val1+val2;
}
 int main(){
    int n=3;
    int m=3;
    string str="";      
    cout<<gridWays(0,0,n,m,str);
    cout<<str;
    return 0;
 }