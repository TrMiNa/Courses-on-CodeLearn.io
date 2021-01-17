/* ************************************************

    Created by TrMiNa on 12/17/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

long long heightOfTriangle(int n)
{
    long long h=0;
    while(n>0)
    {
        h++;
        n = n - h;
    }
    if(n<0)
        h--;
    return h;
}