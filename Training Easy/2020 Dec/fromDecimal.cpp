/* ************************************************

    Created by TrMiNa on 12/28/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string fromDecimal(int b, int n)
{
    string result="";
    int digit;
    while(n>0)
    {
        digit=n%b;
        result.insert(0, to_string(digit));
        n/=b;
    }
    return result;
}