/* ************************************************

    Created by TrMiNa on 12/19/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int sumNumbersLargerAverage(std::vector<int> a)
{
    long long sum=0, avg=0;
    int len=a.size();
    if(len==0||len==1)
        return -1;
    for(int i=0;i<len;i++)
        avg+=a[i];
    avg=avg/len;
    for(int i=0;i<len;i++)
    {
        if(a[i]>avg)
            sum+=a[i];
    }
    return sum;
}