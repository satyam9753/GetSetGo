#include<iostream>
#include<algorithm> // for copy_n()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Declaring second array
    int ar1[6];

    // Using copy_n() to copy contents
    copy_n(ar, 5, ar1);

    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";

    return 0;

}
