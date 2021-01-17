/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
int factorSum(int n)
{
    int sumDiv;
    do
    {
        sumDiv=0;
        for(int i=2;i<=n;i++)
        {
            while(n%i==0)
            {
                sumDiv+=i;
                n/=i;
            }
        }
        n=sumDiv;
    }while(!isPrime(n)&&n!=4&&n!=1);
    return n;
}