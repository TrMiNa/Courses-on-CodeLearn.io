bool isPowerOfFour(long long n)
{
    long temp;
    for(int i=0;i<n;i++)
    {
        if(pow(4, i)==n)
            return true;
        else if(pow(4, i)>n)
            return false;
    }
}