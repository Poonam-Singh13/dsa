#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int>ll){
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<" -> ";
    }cout<<"NULL"<<"\n";

}
int main(){
    list<int>ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    printList(ll);
   cout<<"size of linked list is"<< ll.size()<<"\n";
   cout<<"head="<<ll.front()<<"\n";
   cout<<"tail="<<ll.back()<<"\n";
    return 0;
}