#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct comparePair{
    bool operator () (pair<string,int>&p1,pair<string,int>&p2){
        return p1.second<p2.second;
    }
 };


int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair>pq;
    pq.push(make_pair("rohit",78));
    pq.push(make_pair("aman",98));
    pq.push(make_pair("chetan",48));

    while(!pq.empty()){
        cout<<"top = "<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();    
    }
}
