#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector< vector <int> > vect(6, vector< int >(6));
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> vect[i][j];
        }
    }

    int max = 7*-9;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j < 4 && i < 4) {
                int sum = vect[i][j] + vect[i][j + 1] + vect[i][j + 2] + vect[i + 1][j + 1] + vect[i + 2][j] + vect[i + 2][j + 1] + vect[i + 2][j + 2];
                if (sum > max) max = sum;
            }
        }
    }
    cout<<max;
    }
