/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */



#include <iostream>
#include <vector>

int cmpFrag(int num1, int denom1, int num2, int denom2)
{
    long long tempNum = num1 * denom2 - num2 * denom1;
    if (tempNum == 0) return 0;
    if (tempNum > 0) return 1;
    else return -1;
}

int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
    int maxIdx = 0;
    for (int i = 0; i < numerators.size(); i++)
    {
        if (cmpFrag(numerators[i], denominators[i], numerators[maxIdx], denominators[maxIdx]) == 1)
            maxIdx = i;
    }
    return maxIdx;
}


