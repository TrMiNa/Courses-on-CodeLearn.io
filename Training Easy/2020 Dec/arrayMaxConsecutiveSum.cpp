/* ************************************************

    Created by TrMiNa on 12/15/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k)
{
    std::vector<int> temp;
    int realMax=0;
    for(int i=0;i<=inputArray.size()-k;i++)
    {
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=inputArray[i+j];
        }
        if(sum>realMax||realMax==0)
            realMax=sum;
    }
    return realMax;
}