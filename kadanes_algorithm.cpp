// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()  //Driver program to test maxSubArraySum
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
//--------------------------------------------------
/* Approach 2
----------------------------------------------------
int Solution::maxSubArray(const vector<int> &A) {
    int max_till_now=A[0],max_ending_here=A[0];
    for(int i=1;i<A.size();i++){
        max_ending_here=max(max_ending_here+A[i],A[i]);

        if(max_till_now<max_ending_here)
         max_till_now=max_ending_here;
    }
    return max_till_now;
}
----------------------------------------------------*/
