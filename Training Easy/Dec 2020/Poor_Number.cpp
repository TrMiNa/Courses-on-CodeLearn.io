bool poorNumber(int n)
{
    int sumDivisor=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sumDivisor+=i;
    }
    if(sumDivisor<n)
        return true;
    else
        return false;
}