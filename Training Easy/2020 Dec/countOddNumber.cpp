/* ************************************************

    Created by TrMiNa on 12/29/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

long long countOdd(long long l, long long r)
{
    if(l%2==1||r%2==1)
        return (r-l)/2+1;
    else
        return (r-l)/2;
}