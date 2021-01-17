bool goodDivisorNumber(int n)
{
    int divisor[100];
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            divisor[k++]=i;
    }
    for(int i=0;i<k-1;i++)
        divisor[i]=divisor[i+1]-divisor[i];
    for(int i=0;i<k;i++)
    {
        if(n%divisor[i]!=0)
        return false;
    }
    return true;
}