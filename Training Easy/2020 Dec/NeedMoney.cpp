/* ************************************************

    Created by TrMiNa on 12/24/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int needMoney(int t, int s, int p)
{
    double money=s, need=t;
    double rate = p/100.0;
    int year=0;
    while(money<need)
    {
        money*=(rate+1);
        year++;
    }
    return year;
}