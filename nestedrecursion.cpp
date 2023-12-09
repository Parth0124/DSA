#include<iostream>
using namespace std;
int fun(int n)
{
    if (n>100)
    {
        cout<<n-10;
    }
    else
    {
        fun(fun(n+11));
    }
}
int main()
{
    int x=95;
    fun(95);
}