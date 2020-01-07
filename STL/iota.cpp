#include<iostream>
#include<numeric> // for iota()
using namespace std;
int main()
{
    // Initializing array with 0 values
    int ar[8] =  {0};

    // Using iota() to assign values
    iota(ar, ar+8, 89);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<8 ; i++)
       cout << ar[i] << " ";

    return 0;

}
