#include<iostream>
#include<string>
using namespace std;
class User{
    private:
    int id;
    string password;
    public:
    string userName;

    User(int id){
        this->id=id;
    }
    void setPassword(string password){
        this->password=password;

    }
    string getPassword(){
        return password;
    }

};

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=12;
    }
    Car(Car &original){
        name=original.name;
        color=original.color;
        mileage=new int;
        *mileage=*original.mileage;
    }
    ~Car(){
        cout<<"destructor invoked \n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};
int main(){
    // User user1(101);
    // user1.userName="Ram";
    // user1.setPassword("sghd");

    // cout<<"username ="<<user1.userName<<endl;
    // cout<<"user password = "<<user1.getPassword()<<endl;

    Car c1("Nexa Baleno","white");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c2.mileage<<endl;
    cout<<*c1.mileage<<endl;

     return 0;


    

}