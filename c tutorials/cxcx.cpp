#include <iostream>
#include <limits>
using namespace std;
void traps(int *heights,int n){
    int leftMax[20000];
    leftMax[0] = -845765; // Use correct integer limit
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],heights[i-1]);
    }
    int rightMax[20000];
    rightMax[0]=-48367;
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],heights[i+1]);
    }
    int waterTrapped=0;
    for(int i=0;i<n;i++){
        int currWater=min(leftMax[i],rightMax[i])-heights[i];
        if(currWater>0){
            waterTrapped+=currWater;
        }
    }cout<<waterTrapped;
}

int main(){
    int heights[7]={7,6,5,4,3,2,1};
    traps(heights,7);
    return 0;
}