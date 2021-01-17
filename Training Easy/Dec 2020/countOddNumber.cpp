long long countOdd(long long l, long long r)
{
    if(l%2==1||r%2==1)
        return (r-l)/2+1;
    else
        return (r-l)/2;
}