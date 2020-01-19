#include <iostream>
#include <string.h>

using namespace std;
char shiftedS[];
void shiftByK(char S[], int N, int K) {

    for(int i=0; i<N; i++) {
        int idx = (i+K) % N;
        shiftedS[idx] = S[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << shiftedS[i];
    }
}
int main(){
    shiftByK("football", 8, 2);

    return 0;
    }
