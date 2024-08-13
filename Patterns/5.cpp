/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number of rows" << endl;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <=x-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}