#include<iostream>
using namespace std;
class Parent{             
    public:
    virtual void hello(){
        cout<<"hello from parent class \n";
    }
};
    class Child:public Parent{
        public:
        void hello(){
            cout<<"hello form child class \n";
        }
    };

int main(){
    Parent *ptr;
    Child child1;
    Parent parent1;
    ptr=&child1;
    ptr->hello();
    ptr=&parent1;
    ptr->hello();


}