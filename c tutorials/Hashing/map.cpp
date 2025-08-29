#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int>m;        /// INSERT AN ELEMENT
    m["China"]=150;
    m["India"]=150;
    m["US"]=50;
    m["UK"]=10;
    m["Nepal"]=20;

    cout<<"India : "<<m["India"]<<endl;;

    for(pair<string,int>country:m){         //PRINT ALL ELEMENT
        cout<<country.first<<","<<country.second<<endl;
    }

    if(m.count("Nepal")){                // return true if element exist
        cout<<"nepal exist \n";
    }else{
        cout<<"doesnt exist \n";
    }
    m.erase("nepal");                   //remove the element

}
