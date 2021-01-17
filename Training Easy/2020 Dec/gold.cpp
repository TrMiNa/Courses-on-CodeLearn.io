/* ************************************************

    Created by TrMiNa on 12/27/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int gold(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(isPrime(i)&&isPrime(n-i))
            count++;
    }
    return count;
}