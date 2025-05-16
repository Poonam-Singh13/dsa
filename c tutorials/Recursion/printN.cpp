#include<iostream>
using namespace std;
/*void printN(int n){     //DECREASING ORDER
    if(n==0){
        return ;
    }
    cout<<n<<"  ";
    return printN(n-1);
}
int main(){
    printN(5);
    return 0;
}*/


void printN(int n){     //INCREASING ORDER
    if(n==0){
        return ;
    }
    return printN(n-1);
    cout<<n<<"  ";
}
int main(){
    printN(5);
    return 0;
}
