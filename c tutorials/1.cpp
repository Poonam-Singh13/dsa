#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"enter the number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    cout<<temp<<" is a armstrong number";
    else
    cout<< temp<<" is not a armstrong number";
    return 0;
}