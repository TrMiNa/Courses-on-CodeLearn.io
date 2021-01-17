/* ************************************************

    Created by TrMiNa on 12/17/20.
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
long long sumPrimeIndex(std::vector<int> arr)
{
    long long count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(isPrime(i))
            count+=arr[i];
    }
    return count;
}