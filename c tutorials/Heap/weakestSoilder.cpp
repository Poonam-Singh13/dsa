#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Row{
    public:
    int count;
    int idx;
    Row(int count,int idx){
        this->count=count;
        this->idx=idx;
    }
    bool operator <(const Row &obj)const{         // logic for obj comparison using operator overloading
        if(this->count==obj.count){
            return this->idx > obj.idx;
        }
        return this->count > obj.count;
    }
};

void weakestSoilder(vector<vector<int>>mat,int k){
    vector<Row>row;
    for(int i=0;i<mat.size();i++){
        int count=0;
        for(int j=0;j<mat[i].size() && mat[i][j]==1;j++){
            count++;
        }
        row.push_back(Row(count,i));
    }
    priority_queue<Row>pq(row.begin(),row.end());
    for(int i=0;i<k;i++){
        cout<<"row = "<<pq.top().idx<<endl;
        pq.pop();
    }
}
int main(){
    vector<vector<int>>mat={{1,0,0,0},
                            {1,1,1,1} ,
                            {1,0,0,0} ,
                            {1,0,0,0}  }  ; 
                            
    int k=1;
    weakestSoilder(mat,k);

}