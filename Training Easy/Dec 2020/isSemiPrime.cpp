bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
bool isSemiPrime(int n)
{
    int temp;
    for(int i=2;i*i<=n;i++)
    {
        temp=n/i;
        if(isPrime(i)&&isPrime(temp)&&(temp*i==n))
            return true;
    }
    return false;
}