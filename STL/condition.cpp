#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};

    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "\nAll are positive elements" :
          cout << "\nAll are not positive elements";

    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "\nThere exists a negative element" :
          cout << "\nAll are positive elements";

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "\nNo negative elements" :
          cout << "\nThere are negative elements";

    return 0;

}
