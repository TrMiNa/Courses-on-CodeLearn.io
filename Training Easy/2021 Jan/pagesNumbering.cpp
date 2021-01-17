/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int pagesNumbering(int n)
{
    int digit=0, storeN = n, countDigit=0;
    while(storeN>0)
    {
        storeN/=10;
        digit++;
    }
    countDigit = digit*((n-pow(10, digit-1))+1);
    digit--;
    while(digit)
    {
        countDigit += digit*(pow(10, digit)-pow(10, digit-1));
        digit--;
    }
    return countDigit;
}