#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;
int main(){
    map<int,string>m;
    m[101]="rahul";
    m[102]="neha";
    m[103]="rahul";

    cout<<m[101]<<endl;
    cout<< m.count(101)<<endl;
    m[101]="rajat";
    cout<<m[101]<<endl;

    for(auto it:m){
        cout<<"key = "<<(it.first)*2<<","<<"value = "<<it.second<<endl;
    }
}