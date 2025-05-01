#include<iostream>
using namespace std;
//Basic bitwise operations AND   OR   NOT   RIGHT SHIFT   LEFT SHIFT

  // cout<<(3&5)<<endl;
    // cout<<(3|5)<<endl;
    // cout<<(3^5)<<endl;
    // cout<<(7<<2)<<endl;
    // cout<<(7>>2)<<endl;


// FUNTIONS RELATED WITH BIT MANUPILATION
void evenOrOdd(int num){
    if((num&1)==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}
int getIthBit(int num,int i){
    int bitMask=(1<<i);
    if(!(num & bitMask)){
        return 0;
    }else{
       return 1;
    }
}
int setIthBit(int num,int i){
    int bitMask=1<<i;
    return(num|bitMask);

}
int clearIthBit(int num,int i){
    int bitMask=~(1<<i);
    return num&bitMask;

}
bool isPowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }
    else{
        return false;
    }
}
void updateIthBit(int num,int i,int val){
    num=num&(~(1<<i));
    num=num|(val<<i);
    cout<<num<<endl;
}
void clearfromIthBit(int num,int i){
    int bitMask=(~0)<<i;
    num=num&bitMask;
    cout<<"num "<<num;
}
int countSetBit(int num){
    int count=0;
    while(num>0){
        int lastDig=num&1;
        count+=lastDig;
        num=num>>1;
    }cout<<"count \n";
    return count;
}
void fastExpo(int x,int n){
    int ans=1;
    while(n>0){
        int lastBit=n&1;
        if(lastBit){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans;
}
int main(){
  
    evenOrOdd(2);
    evenOrOdd(7);
    cout<<getIthBit(7,1);
    cout<<setIthBit(6,3);
    cout<<clearIthBit(6,1);
    cout<< isPowerOf2(16)<<"\n";
    cout<< isPowerOf2(7)<<"\n";
    updateIthBit(7,3,1);
    clearfromIthBit(15,2);
    cout<<countSetBit(10);
    fastExpo(3,5);

    return 0;
}