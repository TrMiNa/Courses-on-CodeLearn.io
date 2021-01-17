int specialPolynomial(int x, int n)
{
    long long s=1;
    long long xPow=1;
    int k=0;
    for(int i=1;s<n;k++)
    {
        xPow*=x;
        s+=xPow;
    }
    if(s==n)
        return k;
    else
        return k-1;
}