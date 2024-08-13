#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Give the number if rows and columns you want in the pattern"<<endl;
    cin>>x;

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}