#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count_arr[101] = {0};

    for (int i = 0; i<n ; i++){

        int color_num;
        cin >> color_num;
        count_arr[color_num]++;
    }

    int tot = 0;
    for (int i = 0; i<=100; i++){
        tot = tot + count_arr[i]/2;
    }

    cout << tot;
}
