/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <iostream>

long long numberZeroDigits(long long n)
{
    long long count = 0;
    while (n > 0) {
        count += n / 5;
        n /= 5;
    }
    return count;
}