#include<iostream>
using namespace std;
void counter(){
    int count=0;
    count++;
    cout<<"count : "<<count<<"\n";
}
int main(){
    counter();   // count : 1   as these are normal variables so for every call there is new stack in memory
    counter();   // count : 1
    counter();   // count : 1
    return 0;

 }

void counter(){
    static int count=0;
    count++;
    cout<<"count : "<<count<<"\n";
}
int main(){
    counter();   // count : 1   as these are static variables so they are only instantiated once for program runtime
    counter();   // count : 2
    counter();   // count : 3
    return 0;

}