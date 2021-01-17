/* ************************************************

    Created by TrMiNa on 12/15/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int countZeroDigit(int a, int b)
{
    int count=0;

    for(int i=a;i<=b;i++)
    {
        int temp=i;
        while(temp)
        {
            if(temp%10==0)
                count++;
            temp/=10;
        }
    }

    return count;
}