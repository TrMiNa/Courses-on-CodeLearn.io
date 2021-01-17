/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int countPlace(std::vector<int> a, int k)
{
    int i = 0, j = 0, count = 0, len =a.size();
    while(i<len)
    {
        while(a[i]-a[j] <= k && i<len)
            i++;
        j=i-1;
        while(a[i]-a[j] <= k && i<len)
            i++;
        j=i;
        count++;
    }
    return count;
}