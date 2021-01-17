/* ************************************************

    Created by TrMiNa on 12/17/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int makeFlags(int k, int n)
{
    long long a=1, b=1, c=1;
    for(int i=1;i<=n;i++)
        a*=i;
    for(int i=1;i<=(n-k);i++)
        b*=i;
    for(int i=1;i<=k;i++)
        c*=i;
    return a/(b*c);
}