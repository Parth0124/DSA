/*
    *    
   ***   
  *****  
 ******* 
*********
*/


#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number of rows"<<endl;
    cin>>x;

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x-i-1; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        for (int j=0; j<x-i-1; j++)
        {
            cout <<" ";
        }
        cout<<endl;
    }

    return 0;

}
