#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    return fib(n-1)+fib(n-2);
}

int main()
{
    int a;
    cout<<"Enter the number till which we need the fibonacci series."<<endl;
    cin>>a;
    cout<<"The fibonacci series till "<<a<<" terms is: "<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<fib(i)<<endl;
    }
}