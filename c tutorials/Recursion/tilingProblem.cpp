#include<iostream>
using namespace std;
int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }
    return tilingProblem(n-1)+tilingProblem(n-2);
}
int main(){
    cout<<"number of tile which can be accomodate are  "<<tilingProblem(5);
    return 0;

}