/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

std::vector<int> detachedSemiPrime(int n)
{
    std::vector<int> result;
    int temp;
    for(int i=2;i<=n/2;i++)
    {
        temp=n/i;
        if(isPrime(i)&&isPrime(temp)&&(temp*i==n))
        {
            result.push_back(i);
            result.push_back(temp);
            return result;
        }
    }
    result.push_back(-1);
    return result;
}