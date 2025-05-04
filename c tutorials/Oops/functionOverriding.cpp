#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show \n";
    }
};
class Child:public Parent{
    public:
    void Show(){
        cout<<"child class show  \n";
    }
};
int main(){
    Child c1;
    c1.Show();
    return 0;
}