#include<iostream>
using namespace std;
class Shape{           //PURE VIRTUAL FUNCTION
    public:
    virtual void draw()=0;
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"this is circle \n";
    }
};
class Square:public Shape{
    public:
    void draw(){
        cout<<"this is square \n";
    }
};
int main(){
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
    return 0;
}