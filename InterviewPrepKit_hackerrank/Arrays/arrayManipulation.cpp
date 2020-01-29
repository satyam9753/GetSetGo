#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,m;
    cin>>n>>m;

    //long long int arr[n+1];
    long int *arr = new long int[n+1]();  //creating dynamic array since large memory required
    for (long int i = 0; i<=n; ++i)   arr[i] = 0;

    for (long int i = 0; i<m; ++i)
    {
        long int p,q,r;
        cin>>p>>q>>r;
        arr[p] = arr[p] +r;

        if (q<n)  arr[q+1] = arr[q+1] - r;
        }
    long int sum = 0, max_el = 0;

    for (long int i =1; i<=n; ++i)
    {
        sum = sum + arr[i];
        if(sum > max_el) max_el = sum;
    }
    cout<<max_el;
    return 0;
    }
