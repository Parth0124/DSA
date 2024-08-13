#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n==0)
    return 0;
    
    else if(n==1)
    return 1;

    else
    return factorial(n-1)*n;
}

int main()
{
    int a;
    cout<<"Enter the number for which u want the factorial"<<endl;
    cin>>a;

    cout<<"The factorial till "<<a<<" numbers is "<<factorial(a)<<endl;
}