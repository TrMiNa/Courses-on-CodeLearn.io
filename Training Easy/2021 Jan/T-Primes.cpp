/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
bool isPrime(long long n)
{
    if(n<=1) return false;
    for(long long i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}

std::vector<long long> collect(long long a, long long b)
{
    vector<long long> result;
    for(long long i=sqrt(a);i*i<=b;i++)
    {
        if(i*i<a)
            continue;
        if(isPrime(i))
            result.push_back(i*i);
    }
    if(result.size()==0)
        result.push_back(-1);
    return result;
}