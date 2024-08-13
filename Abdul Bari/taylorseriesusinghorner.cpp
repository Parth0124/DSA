#include<iostream>
using namespace std;
int taylor(int x, int n)
{
    static int s=1;
    if(n==0)
    {
        return s;
    }
    else
       s=s+(s*x/n);
    return taylor(x,n-1);
}

int main()
{
    int a,b;
    cout<<"Enter the numerator for the series"<<endl;
    cin>>a;
    cout<<"Enter the number of terms needed for the series"<<endl;
    cin>>b;
    cout<<"The answer for taylor series for "<<a<<" with "<<b<<" number of terms is "<<taylor(a,b)<<endl;
}