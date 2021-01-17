/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int longestSequence(std::vector<int> a)
{
    int countMax = 0, delta, preIdx, countTemp;
    for(int i=0;i<a.size()-1;i++)
    {
        for(int k=i+1;k<a.size();k++)
        {
            countTemp = 1;
            delta=a[k]-a[i];
            preIdx = i;
            for(int j=i+1;j<a.size();j++)
            {
                if((a[j]-a[preIdx])==delta)
                {
                    countTemp++;
                    preIdx = j;
                }
            }
            if(countTemp>countMax)
                countMax=countTemp;
        }
    }
    return countMax;
}