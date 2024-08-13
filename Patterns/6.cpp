/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
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
        for (int j = 1; j <= x - i + 1; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }

    return 0;
}