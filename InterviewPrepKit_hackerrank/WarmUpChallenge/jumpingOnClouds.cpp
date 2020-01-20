#include <bits/stdc++.h>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {

    int jumps = 0;
    int i=0;
    while(i<(c.size()-1)){
        if((i+1) == (c.size()-1)) i++;

        else if(c[i+2] == 0) i+=2;

        else i++;

        jumps++;
    }
    return (jumps);
}

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        c[i] = val;
    }

    int result = jumpingOnClouds(c);

    cout << result;
    return 0;
}

