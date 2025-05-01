#include<iostream>
#include<vector>
using namespace std;
// introduction to vectors
int main(){
    vector<int>vec1;
    for(int i=0;i<5;i++){
        vec1.push_back(i);
    }
    cout<<"size of vector = "<<vec1.size()<<endl;
    cout<<"capacity of vector = "<<vec1.capacity()<<endl;
    vec1.pop_back();
    vec1.pop_back();
    vec1.pop_back();
    vec1.pop_back();
    vec1.pop_back();
    cout<<"size of vector = "<<vec1.size()<<endl;
    cout<<"capacity of vector = "<<vec1.capacity()<<endl;
}

// pair sum problem
/*vector<int> pairSum(vector<int> arr,int target){
    int st=0;
    int end=arr.size()-1;
    int currSum=0;
    vector<int>ans;
    while(st<end){
        currSum=arr[st]+arr[end];
    if(currSum==target){
        ans.push_back(st);
        ans.push_back(end);
        return ans;
    }else if(currSum>target){
        end--;
    }else{
        st++;
    }
    }
}
int main(){
    vector<int>vec={2,7,11,15};
    int target=18;
    vector<int>ans=pairSum(vec,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}*/

// 2-D vectors

/*int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5},{6}};
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}*/
