#include<iostream>
using namespace std;
class Example{
    public:
    static int x ;
};
int Example::x=1;
int main(){
    Example eg1;
    Example eg2;
    Example eg3;

    cout<<eg1.x++<<"\n";
    cout<<eg2.x++<<"\n";
    cout<<eg3.x++<<"\n";

}