/* ************************************************

    Created by TrMiNa on 12/24/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int sockMerchant(std::vector<int> sizes)
{
    int countPair=0;
    sort(sizes.begin(), sizes.end());
    for(int i=0;i<sizes.size();)
    {
        if(sizes[i]==sizes[i+1])
        {
            countPair++;
            i+=2;
        }
        else
            i++;
    }
    return countPair;
}