long long evenOdds(long long n, long long k)
{
    unsigned long long countOdd;
    if(n%2==1) countOdd=n/2+1;
    else countOdd=n/2;
    if(k<=countOdd)
        return k*2-1;
    else
        return (k-countOdd)*2;
}