std::vector<long long> pairLCM(long long n)
{
    std::vector<long long> result;
    if(n%2==0)
    {
        result.push_back(n/2);
        result.push_back(n/2);
        return result;
    }
    else
    {
        for(int a=2;a*a<=n;a++)
        {
            if(n%a==0)
            {
                result.push_back(n/a);
                result.push_back(n-n/a);
                return result;
            }
        }
        result.push_back(1);
        result.push_back(n-1);
        return result;
    }
}