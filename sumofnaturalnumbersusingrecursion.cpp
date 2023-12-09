#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    cout<<"Enter a natural number"<<endl;

    else if(n==1)
    return 1;

    else
    return sum(n-1)+n;
}

int main()
{
    int a;
    cout<<"Enter the value till which u want the sum to be printed"<<endl;
    cin>>a;

    cout<<"The sum of "<<a<<" natural numbers is "<<sum(a)<<endl;
    return 0;
}

 