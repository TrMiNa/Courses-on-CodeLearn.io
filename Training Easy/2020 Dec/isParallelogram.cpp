/* ************************************************

    Created by TrMiNa on 12/21/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isParallelogram(std::vector<int> arr)
{
    int sumDegree=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]<=0||arr[i]>=180)
            return false;
        sumDegree+=arr[i];
    }
    if(sumDegree!=360)
        return false;
    int temp=arr[0];
    for(int i=1;i<4;i++)
    {
        if(temp==arr[i])
            return true;
    }
    return false;
}