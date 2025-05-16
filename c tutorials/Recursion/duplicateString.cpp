#include<iostream>
#include<string>
using namespace std;

void duplicateString(string str,string ans, int i,bool map[26]){
    if(i==str.size()){
        cout<<" ans : "<<ans;
        return;
    }
    int mapIdx=(int)(str[i]-'a');
    if(map[mapIdx]==true){
        duplicateString(str,ans,i+1,map);
    }else{
        map[mapIdx]=true;
       duplicateString(str,ans+str[i],i+1,map);
    }

}
int main(){
    string str="aaabbbbccccdddd";
    string ans="";
    bool map[26]={false};
    duplicateString(str,ans,0,map);

}