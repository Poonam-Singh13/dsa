#include<iostream>
#include<string>
using namespace std;
class A{                             //FRIEND FUNCTION
    string secret="secret data";
    friend void revealSecret(A &obj);
};
void revealSecret(A&obj){
    cout<<obj.secret<<endl;
}
int main(){
    A a1;
    revealSecret(a1);
    return 0;

}