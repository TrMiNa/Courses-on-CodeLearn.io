/* ************************************************

    Created by TrMiNa on 12/17/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int prettyArray(std::vector<int> arr)
{
    int countOdd=0, countEven=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
            countEven++;
        else
            countOdd++;
    }
    if(countOdd>countEven)
        return countEven;

    else
        return countOdd;
}