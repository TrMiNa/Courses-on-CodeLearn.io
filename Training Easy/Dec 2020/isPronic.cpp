bool isPronic(int n)
{
    if(n==0||n==2)
        return true;
    for(int i=1;i<=n/2;i++)
    {
        if(i*(i+1)==n)
            return true;
    }
    return false;
}