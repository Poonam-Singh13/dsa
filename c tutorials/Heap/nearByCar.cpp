#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Car{
    public:
    int idx;
    int distSq;
    Car(int idx,int distSq){
        this->idx=idx;
        this->distSq=distSq;
    }

    bool operator < (const Car & obj)const{
        return this->distSq >obj.distSq;
    }
};
void nearByCar(vector<pair<int,int>>pos,int k){
    vector<Car>c;
    for(int i=0;i<pos.size();i++){
        int distSq=(pos[i].first*pos[i].first)+(pos[i].second*pos[i].second);
        c.push_back(Car(i,distSq));
    }
    priority_queue<Car>pq(c.begin(),c.end());
    for(int i=0;i<k;i++){
        cout<<"car "<<pq.top().idx<<endl;
        pq.pop();
    }
}
int main(){
    vector<pair<int,int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-3,4));
    int k=2;
    nearByCar(pos,k);

}