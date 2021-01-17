/* ************************************************

    Created by TrMiNa on 12/16/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int sumDivisors(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0&&!isPrime(i))
            count+=i;
    }
    return count;
}
