#include<iostream>
using namespace std;
class student
{

  string name;
public:

int age;
bool gender;
/*void setname(string s)
    {
        name=s;
    }
    void getname()
        {
            cout<<name<<endl;
        }*/
void printInfo()
    {
         cout<<" name= ";
         cout<<name<<endl;
         cout<<" age= ";
         cout<<age<<endl;
         cout<<"gender= ";
         cout<<gender<<endl;
    }
 student(string s,int a,int g)
    {
        name=s;
        age=a;
        gender=g;
    } 
 student()
    {

    }
student(student &a)
    {
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
 ~student()
    {
cout<<"destructor called"<<endl;
    }   
        
    
};


int main()
{
/*student a;
a.name=kim;
a.age=28;
a.gender=0;

student b;
b.name=suga;
a.age=29;
a.gender=0;*/
/*student arr[3];
for(int i=0;i<3;i++)
    {
        string s;
        cout<<" name= ";
       cin>> s;
       arr[i].setname(s);
        cout<<"age =";
       cin>> arr[i].age;
        cout<<"gender =";
       cin>> arr[i].gender;
    }
    for(int i=0;i<3;i++)
        {
            arr[i].printInfo();
        }*/
     student a("poonam",18,1);
     a.printInfo();
     student b;
     b.printInfo();
     student c =a;
     c.printInfo();

       
        return 0;
        
}
    