#include<iostream>
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
                  
{ 
    if (n == 0) { 
        return; 
    } 
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
    cout << "Move disk " << n << " from rod " << from_rod 
         << " to rod " << to_rod << endl; 
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 
  
// Driver code 
int main() 
{ 
    int n;
    cout<<"Enter the value for the number of disks to be present"<<endl;
    cin>>n;
  
    // A, B and C are names of rods 
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0; 
} 