vector<int> Solution::sieve(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<bool> isprime(n+1,true);
    vector<int> ans;
    isprime[0]=false;
    isprime[1]=false;
    for(int p=2;p*p<=n;p++)
    {
        if(isprime[p])
        {
            for(int i=p*2;i<=n;i=i+p)
            {
                isprime[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        ans.push_back(i);
    }
    return ans;

}

