/* 
*
**
***
****
*/

#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<< "Enter the number of rows for the pattern"<<endl;
    cin>>x;

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}