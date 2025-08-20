#include<iostream>
#include<queue>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string name,int marks){
        this->name=name;
        this->marks=marks;
    }
    bool operator < (const Student &obj)const{
        return this->name > obj.name;
    }

};
int main(){
    priority_queue<Student>pq;
    pq.push(Student("rohit",78));
    pq.push(Student("aman",98));
    pq.push(Student("chetan",48));

    while(!pq.empty()){
        cout<<"top = "<<pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();    
    }
}
