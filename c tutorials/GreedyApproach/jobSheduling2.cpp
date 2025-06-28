#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Jobs{
    public:
    int idx;
    int deadline;
    int profit;
    Jobs(int idx,int deadline,int profit){
        this->idx=idx;
        this->deadline=deadline;
        this->profit=profit;
    }                                      
};
int maxProfit(vector<pair<int,int>>pairs){
    int n=pairs.size();
    vector<Jobs>job;
    for(int i=0;i<n;i++){
        job.emplace_back(i,pairs[i].first,pairs[i].second);
    }
    sort(job.begin(),job.end(),[](Jobs &a,Jobs &b){
         return a.profit>b.profit;
    });
    cout<<"selection Job  "<<job[0].idx<<endl;
    int profit=job[0].profit;
    int safedeadline=2;

    for(int i=1;i<n;i++){
        if(job[i].deadline>=safedeadline){
            cout<<"selecting job"<<job[i].idx<<endl;
            profit+=job[i].profit;
            safedeadline++;
        }
    }
    cout<<"max profit : "<<profit;
    return profit;
}
int main(){

    int n=4;
    vector<pair<int ,int>>jobs(n,make_pair(0,0));
    jobs[0]=make_pair(4,20);
    jobs[1]=make_pair(1,10);
    jobs[2]=make_pair(1,40);
    jobs[3]=make_pair(1,30);
    maxProfit(jobs);
    
}