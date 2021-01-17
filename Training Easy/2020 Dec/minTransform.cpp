/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int minTransform(long long n)
{
    int count=0;
    while(n>1)
    {
        if(n%2==0)
        {
            count++;
            n/=2;
        }
        else if((n+1)%4==0&&(n-1)!=2)
        {
            n++;
            count++;
        }
        else
        {
            n--;
            count++;
        }
    }
    return count;
}