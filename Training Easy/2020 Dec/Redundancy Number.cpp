/* ************************************************

    Created by TrMiNa on 12/21/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isRedundancyNum(int n)
{
    int count=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) count+=i;
        if(count>n)
            return true;
    }
    if(count>n) return true;
    return false;
}
long long redundancyNumber(int n)
{
    while(true)
    {
        if(isRedundancyNum(n))
            return n;
        n++;
    }
}