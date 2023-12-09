#include<iostream>
#include<cmath>
using namespace std;
int pow(int m,int n)
{
    if (n==0)
    return 1;
    else
    return pow(m,(n-1))*m;
}

int main()
{
    int a,b;
    cout<<"Enter the value for the base"<<endl;
    cin>>a;
    cout<<"Enter the value for the exponent"<<endl;
    cin>>b;
    cout<<"The power of "<<b<<" to the base "<<a<<" is "<<pow(a,b)<<endl;
}