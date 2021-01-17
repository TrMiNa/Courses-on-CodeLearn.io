/* ************************************************

    Created by TrMiNa on 12/14/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isSortedArray(std::vector<int> arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1])
        return false;
    }
    return true;
}