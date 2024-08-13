#include<iostream>
using namespace std;

int combination(int n, int r)
{
    if(r==0 || n==r)
    {
        return 1;
    }
    else
    {
        return combination(n-1,r-1)+combination(n-1,r);
    }
}

int main()
{
    int a,b;
    cout<<"Enter the number of terms present"<<endl;
    cin>>a;
    cout<<"Enter the terms to be chosen"<<endl;
    cin>>b;
    cout<<"The nCr value for "<<a<<" terms with "<<b<<" numbers to be chosen is "<<combination(a,b)<<endl;
}