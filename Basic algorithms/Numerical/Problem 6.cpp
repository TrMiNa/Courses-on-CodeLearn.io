/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int digitsProduct(int product)
{
    if(product==0) return 10;
    if(product<=9) return product;
    long long result=0, pow=1;
    bool isFound;
    while(product>1)
    {
        isFound = false;
        for(int i=9;i>=2;i--)
        {
            if(product%i==0)
            {
                result+=i*pow;
                pow*=10;
                product/=i;
                isFound=true;
                break;
            }
        }
        if(!isFound)
            return -1;
    }
    return result;
}