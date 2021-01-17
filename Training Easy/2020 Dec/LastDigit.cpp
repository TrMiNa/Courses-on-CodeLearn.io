/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int lastDigit(int a, int b)
{
    long d=1, p=a;
    while(b)
    {
        if(b%2==1)
            d=d*p%10;
        p=(p*p)%10;
        b/=2;
    }
    return d;
}

//Reference to the algorithm in book
//"Nhap mon lap trinh - Tran Dan Thu" - curriculum of Ho Chi Minh University of Science - Vietnam National University