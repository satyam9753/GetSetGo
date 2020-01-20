#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int sea_level = 0;
    int c_valleys = 0;

    for(const char c:s){

        if (c=='U'){
         //since we need to count only when we go upwards and are just one step away from reaching ground level
            if (sea_level == -1) c_valleys++;
            sea_level++;
        }
        else sea_level--;
    }
    return c_valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
