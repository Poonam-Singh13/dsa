#include<iostream>
#include<vector>
using namespace std;

int indianCOin(vector<int>coins,int val){
    int n=coins.size();
    int ans=0;
    for(int i=n-1;i>0,val>0;i--){
        if(val>=coins[i]){
            ans+=val/coins[i];
            val=val%coins[i];
        }
    }
    cout<<"min coins for change = "<<ans<<endl;
    return ans;
}
int main(){
    vector<int>coins={1,2,5,10,20,50,100,500,2000};
    int val=1099;
    indianCOin(coins,val);
    return 0;
}