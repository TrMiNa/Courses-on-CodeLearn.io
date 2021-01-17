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

int primeSquare(int n)
{
    int pS = 1;
    if(isPrime(n))
        pS = n*n;
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i))
                pS+=i*i;
            else
                pS+=i;
        }
    }
    return pS;
}