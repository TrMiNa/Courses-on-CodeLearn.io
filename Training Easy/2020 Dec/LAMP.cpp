/* ************************************************

    Created by TrMiNa on 12/21/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

long long Round(double a)
{
    long long b=int(a);
    double delta=a-b;
    if(delta!=0) return b+1;
    else return b; 
}
long long lamp(int m, int n)
{
    double x=m/2.0, y=n/2.0;
    long long result = Round(x)*Round(y);
    return result;
}