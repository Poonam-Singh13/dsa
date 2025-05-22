#include<iostream>
using namespace std;
void fib(int);
int main()
    {
        int n;
        cout<<"enter number of terms";
        cin>>n;
        fib(n);
        return 0;
    }         
    void fib(int n)
    {
        int a=0,b=1,c;
        for(int i=1;i<=n;i++){
            c=a+b;
            cout<<a<<" ";
            a=b;
            b=c;
        }

    }