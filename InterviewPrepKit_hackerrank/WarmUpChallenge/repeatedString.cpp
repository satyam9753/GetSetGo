#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long count_array[s.length()] = {0};
    if (s[0] == 'a') count_array[0]= 1;

    for (int i = 1; i<s.length(); i++){
        count_array[i] = count_array[i-1];
        if(s[i] == 'a') count_array[i] +=1;
    }
    long quo = n/(s.length());
    int rem = (n %s.length() == 0)  ? 0 : count_array[n%s.length() - 1];
    long tot = quo*count_array[s.length()-1] + rem;

    return tot;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
