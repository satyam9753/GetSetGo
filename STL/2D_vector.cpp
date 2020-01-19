// C++ code to demonstrate 2D vector
#include <iostream>
#include <vector> // for 2D vector
using namespace std;

int main()
{
// Initializing 2D vector "vect" with values
    vector<vector<int> > vect{ { 1, 2, 3 },
                               { 6, 9 },
                               { -1, 0, 1 } };

    /*
    vector<vector<int> > vec(row);   // Create a vector of vector with size equal to row.
    */
// Displaying the 2D vector
    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }

    return 0;
}
