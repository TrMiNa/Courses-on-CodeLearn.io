long long deleteNumber(std::vector<int> N)
{
    long long odd=0, even=0;
    for(int i=0;i<N.size();i++)
    {
        if(N[i]%2==0)
            even++;
    }
    odd=N.size()-even;
    if(odd%2==0)
        return odd*(odd-1)/2+(even)*(even-1)/2;
    else
        return even*odd;
}