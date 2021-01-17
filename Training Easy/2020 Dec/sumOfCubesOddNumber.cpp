/* ************************************************

    Created by TrMiNa on 12/24/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

long long sumOfCubesOddNumber(int n)
{
    if(n<=0) return -1;
    long long s=0;
    for(int i=1;i<=2*n-1;i+=2)
    {
        s+=pow(i, 3);
        s%=1000000007;
    }
    return s%1000000007;
}