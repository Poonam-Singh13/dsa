#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void showNum(){
        cout<<real<<"+"<<img<<"i \n";
    }
    Complex operator +(Complex &c2){
        int resReal=this->real+c2.real;
        int resImg=this->img+c2.img;
       return Complex(resReal,resImg);
        
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3;
    c1.showNum();
    c2.showNum();
    c3=c1+c2;
    c3.showNum();
    
    return 0;

}