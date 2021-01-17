/* ************************************************

    Created by TrMiNa on 12/16/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int findGDC(int a, int b)
{
    if (b == 0)
        return a;
    return findGDC(b, a % b);
}

int gcdOfNumbers(std::vector<int> a)
{
    int gdc=a[0];
    for(int i=1;i<a.size();i++)
    {
        gdc = findGDC(gdc, a[i]);
        if(gdc==1)
            return 1;
    }
    return gdc;
}