bool factorialDivisible(int n)
{
    if(n%2==0) return false;
    long long L=1;
    for(int i=2;(i-1)*(i-1)<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


// Using Wilson's theorem