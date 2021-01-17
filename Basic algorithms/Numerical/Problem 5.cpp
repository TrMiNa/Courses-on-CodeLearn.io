/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <iostream>

int lastDigitDiffZero(int n)
{
    long long fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
        if (fac % 10 == 0)
            fac /= 10;
        fac = fac % /* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

100000000;
    }
    while (fac % 10 == 0)
        fac /= 10;
    return fac % 10;
}