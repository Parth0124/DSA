#include<iostream>
using namespace std;
int taylor(int x, int n)
{
    static int p=1, f=1;
    int r;
    if (n==0)
    {
        return 1;
    }
    else
    {
        r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main()
{
    int a,b;
    cout<<"Enter the numerator for the taylor series"<<endl;
    cin>>a;
    cout<<"Enter the number of terms needed in the series"<<endl;
    cin>>b;
    cout<<"The taylor series for "<<a<<" numerator with "<<b<<" terms is "<< taylor(a,b)<<endl;
}