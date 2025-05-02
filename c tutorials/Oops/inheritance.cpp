#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string color;
    void eats(){
        cout<<" eats......\n";
    }
    void breathe(){
        cout<<"breathes.....\n";
    }

};
class Mammal:public Animal{
    public:
    string bloodtype;
    Mammal(){
        bloodtype="warm";
    }

};
class Dog:public Mammal{
    public:
    void tailWag(){
        cout<<"a dog wag its tail \n";
    }
};
// class Fish:public Animal{
//     public:
//     int fins;
//     void swims(){   
//         cout<<"swims.....\n";
//     }
//};
class Teacher{
    public:
        int salary;
        string subject;

    
};
class Student{
    public:
    int rollno;
    float cgpa;

};
class TA:public Teacher,public Student{
    public:
    string name;

};
int main(){
    // Fish f1;
    // f1.swims();
    // f1.eats();
    // f1.breathe();
    // Dog d1;
    // d1.eats();
    // d1.breathe();
    // d1.tailWag();
    // cout<<d1.bloodtype<<endl;
    TA ta1;
    ta1.name="shyam";
    ta1.subject="C++";
    ta1.cgpa=9.1;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;





    return 0;
}