/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <iostream>

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int primeSum(int n)
{
    long long result = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            result += i;
            result = result % 22082018;
        }
    }
    return result;
}